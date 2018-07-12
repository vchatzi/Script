# 1 "d:\\loadrunner\\scripts\\agile pe\\integrated load testing\\st1\\web\\clearbasketandlogout_uk\\\\combined_ClearBasketAndLogout_UK.c"
# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"






















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 512 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 515 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 539 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 573 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 596 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 620 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 699 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 760 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 775 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 799 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 811 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 819 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 825 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 926 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 933 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 955 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1031 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1060 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


# 1072 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "d:\\loadrunner\\scripts\\agile pe\\integrated load testing\\st1\\web\\clearbasketandlogout_uk\\\\combined_ClearBasketAndLogout_UK.c" 2

# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "d:\\loadrunner\\scripts\\agile pe\\integrated load testing\\st1\\web\\clearbasketandlogout_uk\\\\combined_ClearBasketAndLogout_UK.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 769 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"


# 782 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"



























# 820 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 888 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

 
 
 






# 9 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/web_api.h" 2

















 







 














  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2


 
 



 
    
 
   
    
     




    
	 





    
    int i =0;

     int k =0;

     char * loadval;
     
     char * val;
     
     int pcount =0;
     
     int vcount=0;
     int ccount=0;
# 3 "d:\\loadrunner\\scripts\\agile pe\\integrated load testing\\st1\\web\\clearbasketandlogout_uk\\\\combined_ClearBasketAndLogout_UK.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "d:\\loadrunner\\scripts\\agile pe\\integrated load testing\\st1\\web\\clearbasketandlogout_uk\\\\combined_ClearBasketAndLogout_UK.c" 2

# 1 "HomePage.c" 1
HomePage()
{
    web_set_max_html_param_len("1024");
	web_set_max_retries ("10");
	web_set_sockets_option("SSL_VERSION", "TLS");
	lr_start_transaction("UK-01-HomePage");
	
	web_reg_find("Search=All",
		"Text=RS | Electronic components",
		"LAST");

	web_url("home.html", 
		"URL=https://{p_URL}/web/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"LAST");

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_url("miniBasketRunningTotal.html", 
		"URL=https://{p_URL}/web/miniBasketRunningTotal.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/home.html", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"LAST");
	
	web_set_sockets_option("SSL_VERSION", "TLS");
	
	lr_end_transaction("UK-01-HomePage",2);
	
	return 0;
}
# 5 "d:\\loadrunner\\scripts\\agile pe\\integrated load testing\\st1\\web\\clearbasketandlogout_uk\\\\combined_ClearBasketAndLogout_UK.c" 2

# 1 "Login.c" 1
Login()
{
	lr_think_time(1);
	
	web_set_max_retries ("10");
	
	lr_start_transaction("UK-02-ClkLoginLink");
	
	web_reg_find("Search=All",
		"Text=title=\"Log In\"",
		"LAST");
	
	web_url("authHome.html",
		"URL=https://{p_URL}/web/authHome.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/home.html", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"LAST");

	web_set_sockets_option("SSL_VERSION", "TLS");

	web_url("miniBasketRunningTotal.html_2", 
		"URL=https://{p_URL}/web/miniBasketRunningTotal.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_URL}/web/authHome.html", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"LAST");
	
	lr_end_transaction("UK-02-ClkLoginLink", 2);

	lr_think_time(1);
	
	web_set_max_retries ("10");
	
	lr_start_transaction("UK-03-Login");
	
	web_submit_data("j_security_check", 
		"Action=https://{p_URL}/web/j_security_check", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://{p_URL}/web/authHome.html", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=username", "Value={p_userId}", "ENDITEM", 
		"Name=j_password", "Value=password", "ENDITEM", 
		"Name=loginBtn", "Value=Log in", "ENDITEM", 
		"Name=j_username", "Value=UK_{p_userId}", "ENDITEM", 
		"Name=prefix", "Value=UK_", "ENDITEM", 
		"LAST");

	web_reg_find("Search=All",
		"SaveCount=",
		"Text=Welcome",
		"LAST");

	web_url("home.html_2", 
		"URL=https://{p_URL}/web/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"LAST");


	web_url("miniBasketRunningTotal.html_3", 
		"URL=https://{p_URL}/web/miniBasketRunningTotal.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/home.html", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("UK-03-Login",2);
	
	web_set_sockets_option("SSL_VERSION", "TLS1.1");
	
	return 0;
}
# 6 "d:\\loadrunner\\scripts\\agile pe\\integrated load testing\\st1\\web\\clearbasketandlogout_uk\\\\combined_ClearBasketAndLogout_UK.c" 2

# 1 "PredectiveSearch.c" 1
PredectiveSearch()
{
	lr_think_time(1);
	
	web_reg_save_param("c_params",
	                  "LB=/web/c/",
	                   
	                  "RB=sra=p",
	                  "ORD=ALL",
	                  "NOTFOUND=Warning",
	               	  "LAST");
	
	web_set_max_retries ("10");
	
	lr_start_transaction("UK-04-PredictiveSearch");
	
	web_reg_find("Search=All",
		"Text=?sra\=p",
		"LAST");
	
	web_url("catSearch", 
 
        "URL=https://{p_URL}/predictivesearch/catSearch?searchTerm={p_searchParam}&locale=uk&advancedPredictiveSearchEnabled=true",
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/home.html", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"LAST");
	
	lr_end_transaction("UK-04-PredictiveSearch",2);
	
	ccount = atoi(lr_eval_string("{c_params_count}"));
	
	if (ccount>0)
	{
		lr_save_string(lr_paramarr_random("c_params"),"srchVal");
	}
	else{
		lr_exit(2, 2); 
	}
	
	return 0;
}
# 7 "d:\\loadrunner\\scripts\\agile pe\\integrated load testing\\st1\\web\\clearbasketandlogout_uk\\\\combined_ClearBasketAndLogout_UK.c" 2

# 1 "HierarchicalSearch.c" 1
HierarchicalSearch()
{
	char * srchVal;
    char * TN_Page;
	lr_think_time(1);
	
	
	web_reg_save_param_regexp(
    	"ParamName=TN_Page",
    	"RegExp=:\/\/st1-uk.rs-online.com\/web\/c\/(.+?)\/(.+?)\/(.+?)\/\" title=\"",
    	"Ordinal=ALL",
    	"Group=3",
    	"SEARCH_FILTERS",
    	"IgnoreRedirections=Yes",
		"NOTFOUND=WARNING",     
    	"LAST" );
	
	
	web_set_max_retries ("10");
	lr_save_string(lr_eval_string("{p_section}"),"category_1");
	lr_save_string(lr_eval_string("{p_subsection}"),"category_2");
	
	lr_start_transaction("UK-04-HierarchySearch");
	
	web_reg_find("Search=All",
		"Text=\"page_type\":\"l2\"",
		"LAST");
	
	web_url("rechargeable-batteries", 
		"URL=https://{p_URL}/web/c/{category_1}/{category_2}/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_URLSt2}/web/home.html", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"LAST");
	
	lr_end_transaction("UK-04-HierarchySearch", 2);	

	pcount = atoi(lr_eval_string("{TN_Page_count}"));
	
	if (pcount>0)
	{
		TN_Page =  lr_paramarr_random("TN_Page");
		lr_save_string(TN_Page,"TN_Page");
		lr_save_string(lr_eval_string("{category_1}/{category_2}/{TN_Page}"),"srchVal");
	}
	else{
		lr_exit(2, 2); 
	}
	return 0;
}
# 8 "d:\\loadrunner\\scripts\\agile pe\\integrated load testing\\st1\\web\\clearbasketandlogout_uk\\\\combined_ClearBasketAndLogout_UK.c" 2

# 1 "BrowseByProductcategory.c" 1
BrowseByProductcategory()
{	
    char * brVal;
	lr_think_time(1);
	
	web_reg_find("Search=All",
		"SaveCount=",
		"Text=Matches",
		"LAST");
	
	web_reg_save_param_regexp(
    	"ParamName=c_val",
    	"RegExp=<a href=\"\/web\/p\/(.+?)\"",
    	"Ordinal=ALL",
    	"SEARCH_FILTERS",
    	"IgnoreRedirections=Yes",
		"NOTFOUND=WARNING",     
    	"LAST" ); 

	web_set_max_retries ("10");
	
	lr_start_transaction("UK-05-BrowseByProductCategory");
	web_url("2-Way Radio Rechargeable Batteries", 
		"URL=https://{p_URL}/web/c/{srchVal}/",
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/c/batteries/rechargeable-batteries/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"LAST");
	   lr_end_transaction("UK-05-BrowseByProductCategory", 2);
	   
	pcount = atoi(lr_eval_string("{c_val_count}"));
	
	if (pcount>0)
	{
		brVal =  lr_paramarr_random("c_val");
	
		lr_save_string(brVal,"brVal");		
	}
	
	else{
		lr_exit(2, 2); 
	}
	
	return 0;
}
# 9 "d:\\loadrunner\\scripts\\agile pe\\integrated load testing\\st1\\web\\clearbasketandlogout_uk\\\\combined_ClearBasketAndLogout_UK.c" 2

# 1 "ViewProductDeatils.c" 1
ViewProductDeatils()
{
	
	
		
	lr_think_time(1);
	
	web_reg_save_param("c_ajaxReq",
	  	"LB=A4J.AJAX.Submit('",
	  	"RB=','addToCartForm",
	  	"ORD=1",
	  	"NOTFOUND=Warning",
	   	"LAST");

	web_reg_save_param("c_BasketId",
		"LB=<form id=\"addToCartForm_",
		"RB=\" name",
		"ORD=1",
		"NOTFOUND=Warning",
		"LAST");
	
	web_reg_save_param("c_viewstate",
	   	"LB=faces.ViewState\" value=\"",
	   	"RB=\"",
	   	"ORD=1",
	 	"NOTFOUND=Warning",
	  	"LAST");
	
	web_reg_save_param("rtqCheck",
	  	"LB='rtqCheckerForm:",
	  	"RB=',",
	   	"ORD=1",
	   	"NOTFOUND=Warning",
	   	"LAST");
	
	web_reg_save_param("prodqty",
	  	"LB=SaveToPartsListWidgetAction_quantity\" value=\"",
	  	"RB=\"",
  		"ORD=1",
	 	"NOTFOUND=Warning",
	  	"LAST");
	 
	web_set_max_retries ("10");
	
	lr_start_transaction("UK-06-ViewProductDetailsPage");
	
	web_reg_find("Search=All",
		"SaveCount=",
		"Text=Product Details",
		"LAST");
	
	 
	 
	 
	  web_reg_find("Text=runRTQWithAvailabilityCheck", "SaveCount=checkstock_count", "LAST");
	web_url("Hex Socket Cap Stainless Steel Plain Socket {p_searchParam}ew, M4 x 12mm", 
		"URL=https://{p_URL}/web/p/{brVal}",  
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/c/fasteners-fixings/{p_searchParam}ews-bolts/socket-{p_searchParam}ews/?sra=p&r=t", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"LAST");
	
	lr_end_transaction("UK-06-ViewProductDetailsPage",2);

	return 0;
}
# 10 "d:\\loadrunner\\scripts\\agile pe\\integrated load testing\\st1\\web\\clearbasketandlogout_uk\\\\combined_ClearBasketAndLogout_UK.c" 2

# 1 "CheckStockLevel.c" 1
CheckStockLevel()
{
	 
# 19 "CheckStockLevel.c"
		
	int nFound;
	nFound = atoi(lr_eval_string("{checkstock_count}"));
	                  	if (nFound == 0)
	    return 0; 
	else
	{
   	

	lr_think_time(1);
	
	web_set_max_retries ("10");
	
	lr_start_transaction("UK-07-CheckStockLevelLink");

	web_reg_find("Text=Check stock", "FAIL=NOTFOUND", "LAST");
	web_reg_find("Text=Enter the quantity you need and click", "FAIL=NOTFOUND", "LAST");
	
	web_submit_data("0281035", 
		"Action=https://{p_URL}/web/p/{brVal}", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/p/socket-{p_searchParam}ews/0281035/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=AJAXREQUEST", "Value={c_ajaxReq}", "ENDITEM",  
		"Name=addToCartForm_{c_BasketId}", "Value=addToCartForm_{c_BasketId}", "ENDITEM",  
		"Name=addToCartForm_{c_BasketId}:qtyWeb", "Value={prodqty}", "ENDITEM", 
		"Name=javax.faces.ViewState", "Value={c_viewstate}", "ENDITEM",  
		"Name=addToCartForm_{c_BasketId}:rtqLinkTop", "Value=addToCartForm_{c_BasketId}:rtqLinkTop", "ENDITEM", 
		"Name=AJAX:EVENTS_COUNT", "Value=1", "ENDITEM", 
		"LAST");

	web_submit_data("0281035_2", 
		"Action=https://{p_URL}/web/p/{brVal}", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/p/socket-{p_searchParam}ews/0281035/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=AJAXREQUEST", "Value=_viewRoot", "ENDITEM", 
		"Name=rtqCheckerForm", "Value=rtqCheckerForm", "ENDITEM", 
		"Name=javax.faces.ViewState", "Value={c_viewstate}", "ENDITEM", 
		"Name=rtqCheckerForm:rtqCheckQty", "Value={prodqty}", "ENDITEM", 
		"Name=rtqCheckerForm:{rtqCheck}", "Value=rtqCheckerForm:{rtqCheck}", "ENDITEM",  
		"Name=ajaxSingle", "Value=rtqCheckerForm:rtqCheckQty", "ENDITEM", 
		"Name=AJAX:EVENTS_COUNT", "Value=1", "ENDITEM", 
		"LAST");
	
	lr_end_transaction("UK-07-CheckStockLevelLink", 2);


	 
	
	web_set_max_retries ("10");
	
	lr_start_transaction("UK-08-CheckStockLevel");


	web_submit_data("0281035_3", 
		"Action=https://{p_URL}/web/p/{brVal}", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/p/socket-{p_searchParam}ews/0281035/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=AJAXREQUEST", "Value=_viewRoot", "ENDITEM", 
		"Name=rtqCheckerForm", "Value=rtqCheckerForm", "ENDITEM", 
		"Name=javax.faces.ViewState", "Value={c_viewstate}", "ENDITEM", 
		"Name=rtqCheckerForm:rtqCheckQty", "Value={prodqty}", "ENDITEM", 
		"Name=rtqCheckerForm:{rtqCheck}", "Value=rtqCheckerForm:{rtqCheck}", "ENDITEM", 
		"Name=ajaxSingle", "Value=rtqCheckerForm:rtqCheckQty", "ENDITEM", 
		"Name=AJAX:EVENTS_COUNT", "Value=1", "ENDITEM", 
		"LAST");

	web_submit_data("0281035_4", 
		"Action=https://{p_URL}/web/p/{brVal}", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/p/socket-{p_searchParam}ews/0281035/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=AJAXREQUEST", "Value=_viewRoot", "ENDITEM", 
		"Name=rtqCheckerForm", "Value=rtqCheckerForm", "ENDITEM", 
		"Name=rtqCheckerForm:rtqCheckQty", "Value={prodqty}", "ENDITEM", 
		"Name=javax.faces.ViewState", "Value={c_viewstate}", "ENDITEM", 
		"Name=rtqCheckerForm:rtqCheckButton", "Value=rtqCheckerForm:rtqCheckButton", "ENDITEM", 
		"Name=AJAX:EVENTS_COUNT", "Value=1", "ENDITEM", 
		"LAST");
	
	lr_end_transaction("UK-08-CheckStockLevel", 2);
	}
	 
# 135 "CheckStockLevel.c"
	
	return 0;
}
# 11 "d:\\loadrunner\\scripts\\agile pe\\integrated load testing\\st1\\web\\clearbasketandlogout_uk\\\\combined_ClearBasketAndLogout_UK.c" 2

# 1 "AddtoBasket.c" 1
AddtoBasket()
{
	
	 

	
	lr_think_time(1);
	
	web_reg_save_param("c_viewstate1",
                       "LB=javax.faces.ViewState\" value=\"",
                       "RB=\"",
                       "ORD=1",
                       "NOTFOUND=Warning",
                       "LAST");

	web_set_max_retries ("10");		
	
	lr_start_transaction("UK-09-ClkAddtoBasket");

	

	web_reg_find("Search=All",
		"SaveCount=",
		"Text=Added",
		"LAST");

	web_submit_data("0281035_5", 
		"Action=https://{p_URL}/web/p/{brVal}",  
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/p/socket-{p_searchParam}ews/0292271/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=AJAXREQUEST", "Value={c_ajaxReq}", "ENDITEM",  
		"Name=addToCartForm_{c_BasketId}", "Value=addToCartForm_{c_BasketId}", "ENDITEM", 
		"Name=addToCartForm_{c_BasketId}:qtyWeb", "Value={prodqty}", "ENDITEM", 
		"Name=javax.faces.ViewState", "Value={c_viewstate}", "ENDITEM", 
		"Name=addToCartForm_{c_BasketId}:addToOrder", "Value=addToCartForm_{c_BasketId}:addToOrder", "ENDITEM", 
		"Name=AJAX:EVENTS_COUNT", "Value=1", "ENDITEM", 
		"LAST");
	
	lr_end_transaction("UK-09-ClkAddtoBasket", 2);

	lr_think_time(1);

	return 0;
}
# 12 "d:\\loadrunner\\scripts\\agile pe\\integrated load testing\\st1\\web\\clearbasketandlogout_uk\\\\combined_ClearBasketAndLogout_UK.c" 2

# 1 "ViewBasket.c" 1
ViewBasket()
{
	lr_think_time(1);
	
	web_set_max_retries ("10");
		
	lr_start_transaction("UK-10-ViewBasket");	
	
	 





            
	
	web_reg_save_param("Noofitems",
	 	"LB=id=\"js-basketQty\">",
	  	"RB=</div>",
		"ORD=1",
	 	"Notfound=warning",
	  	"LAST");
	
    web_reg_save_param("pollid","LB=A4J.AJAX.Poll('_viewRoot','",
	   	"RB=',{'pollId'",
		"ORD=1",
	   	"Notfound=warning",
	   	"LAST");
	
    web_reg_save_param("viewstatepoll",
	    "LB=<input type=\"hidden\" name=\"javax.faces.ViewState\" id=\"javax.faces.ViewState\" value=\"",
	    "RB=\"",
	    "ORD=1",
	    "NOTFOUND=Warning",
	    "LAST");
	
	web_reg_find("Search=All",
		"SaveCount=",
		"Text=\"page_type\":\"basket\"",
		"LAST");
	
	
	
	web_custom_request("28 �547.15", 
        "URL=https://{p_URL}/web/ca/basketsummary/", 
        "Method=GET", 
        "Resource=0", 
        "RecContentType=text/html", 
        "Referer=http://{p_URL}/web/p/{ItemSelection_Corr}", 
        "Snapshot=t177.inf", 
        "Mode=HTTP", 
        "LAST");
        
        
        if(strlen(lr_eval_string("{Noofitems}"))<=0)
        {
        
            do
       {
     web_reg_save_param("Noofitems2","LB=<span class=\"item-badge\">","RB=</span>","ORD=1","Notfound=warning","LAST");
     
     web_custom_request("payment_2",
        "URL=https://{p_URL}/web/ca/basketsummary", 
        "Method=POST", 
        "Resource=0", 
        "RecContentType=text/html", 
        "Referer=http://{p_URL}/web/ca/basketsummary", 
        "Snapshot=t257.inf", 
        "Mode=HTTP", 
        "EncType=application/x-www-form-urlencoded; charset=UTF-8", 
        "Body=AJAXREQUEST=_viewRoot&{pollid}={pollid}&javax.faces.ViewState={viewstatepoll}&{pollid}%3Apoll={pollid}%3Apoll&",
       
        "LAST");
        
        
        }
        
        while (strlen(lr_eval_string("{Noofitems2}"))<=0);

        }
        
        
     
# 92 "ViewBasket.c"
    
    web_reg_save_param("c_id1",
	                  	"LB=RS Stock No.</span><br /><input type=\"text\" name=\"shoppingBasketForm:",
	                 	"RB=\"",
	                	"ORD=1",
	                	"NOTFOUND=Warning",
	               		"LAST");
	                
	web_reg_save_param("c_id2",
	                  "LB=Qty</span><br /><input type=\"text\" name=\"shoppingBasketForm:",
	                  "RB=\"",
	                  "ORD=1",
	                  "NOTFOUND=Warning",
	                  "LAST");
	              
	                	                
    web_reg_save_param("c_value",
	                  "LB=<span class=\"textTitle\">",
	                  "RB=</span>",
	                  "ORD=ALL",
	                  "NOTFOUND=Warning",
	                  "LAST");

   web_reg_save_param("c_qty",
                       "LB=value=\"",
                       "RB=\" class=\"inputText costColumn floatLeft",
                       "ORD=ALL",
                       "NOTFOUND=Warning",
                       "LAST");

	                
    web_reg_save_param("c_viewstate",
                       	"LB=id=\"javax.faces.ViewState\" value=\"",
                       	"RB=\"",
                      	"ORD=1",
                      	"NOTFOUND=Warning",
                      	"LAST");

	
	web_reg_save_param("c_mail",
      					"LB=LoggedInUserSendToColleagueWidgetAction_mailTo\" value=\"",
     					"RB=\"",
    					"ORD=1",
    					"NOTFOUND=Warning",
    					"LAST");
    
    web_reg_save_param("Finalbasketformid",
                       "LB=<a href=\"#\" onclick=\"if(typeof jsfcljs == 'function'){jsfcljs(document.getElementById('shoppingBasketForm'),{'shoppingBasketForm:",
                       "RB='",
                       "ORD=1",
                       "NOTFOUND=Warning",
                       "LAST");
	

    web_custom_request("mybasket",
        "URL=https://{p_URL}/web/ca/basketsummary/", 
        "Method=GET", 
        "Resource=0", 
        "RecContentType=text/html", 
        "Referer=http://{p_URL}/web/p/{ItemSelection_Corr}", 
        "Snapshot=t177.inf", 
        "Mode=HTTP", 
        "LAST");
        
	
	lr_end_transaction("UK-10-ViewBasket", 2);
	
	
	vcount = atoi(lr_eval_string("{c_value_count}"));
	
	if (vcount>0)
	{
		
	lr_save_string(lr_eval_string("shoppingBasketForm=shoppingBasketForm&shoppingBasketForm%3AquickStockNo_0=&shoppingBasketForm%3AquickQty_0=&shoppingBasketForm%3AquickStockNo_1=&shoppingBasketForm%3AquickQty_1=&shoppingBasketForm%3AquickStockNo_2=&shoppingBasketForm%3AquickQty_2=&shoppingBasketForm%3AquickStockNo_3=&shoppingBasketForm%3AquickQty_3=&shoppingBasketForm%3AquickStockNo_4=&shoppingBasketForm%3AquickQty_4=&shoppingBasketForm%3AquickStockNo_5=&shoppingBasketForm%3AquickQty_5=&shoppingBasketForm%3AquickStockNo_6=&shoppingBasketForm%3AquickQty_6=&shoppingBasketForm%3AquickStockNo_7=&shoppingBasketForm%3AquickQty_7=&shoppingBasketForm%3AquickStockNo_8=&shoppingBasketForm%3AquickQty_8=&shoppingBasketForm%3AquickStockNo_9=&shoppingBasketForm%3AquickQty_9=&shoppingBasketForm%3Aj_id3033=&shoppingBasketForm%3Aj_id3039=&shoppingBasketForm%3AQuickOrderWidgetAction_quickOrderTextBox_decorate%3AQuickOrderWidgetAction_listItems=Paste+or+type+your+list+here+and+click+%27Add%27."),"body1");
			
	lr_save_string(lr_eval_string("deliveryOptionCode=5&shoppingBasketForm%3APromoCodeWidgetAction_promotionCode=&shoppingBasketForm%3ApromoCodeTermsAndConditionModalLayerOpenedState=&shoppingBasketForm%3AsendToColleagueWidgetPanelOpenedState=&shoppingBasketForm%3ALoggedInUserSendToColleagueWidgetAction_mailTo_decorate%3ALoggedInUserSendToColleagueWidgetAction_mailTo={c_mail}&shoppingBasketForm%3ALoggedInUserSendToColleagueWidgetAction_subject_decorate%3ALoggedInUserSendToColleagueWidgetAction_subject=Copy+of+order+from+RS+Online&shoppingBasketForm%3ALoggedInUserSendToColleagueWidgetAction_message_decorate%3ALoggedInUserSendToColleagueWidgetAction_message=&shoppingBasketForm%3AsendToColleagueSuccessWidgetPanelOpenedState=&javax.faces.ViewState={c_viewstate}&shoppingBasketForm%3A{Finalbasketformid}=shoppingBasketForm%3A{Finalbasketformid}"),"body2");  
	}
	
	else{
		
		lr_exit(2, 2); 
	}

	for (k=0; k<lr_paramarr_len("c_value"); k++) {
    lr_save_string(lr_paramarr_idx("c_value", k+1), "value");
    lr_save_string(lr_paramarr_idx("c_qty", k+1), "qty");
    
    lr_save_int(k, "ItemIndex");
    
    
   	lr_save_string(lr_eval_string("shoppingBasketForm%3Aj_id3131%3A{ItemIndex}%3Aj_id3178={value}&shoppingBasketForm%3Aj_id3131%3A{ItemIndex}%3Aj_id3258={qty}&"),"temp");
}
    
	lr_save_string(lr_eval_string("{body1}&{temp}{body2}"), "Body");

	return 0;
}
# 13 "d:\\loadrunner\\scripts\\agile pe\\integrated load testing\\st1\\web\\clearbasketandlogout_uk\\\\combined_ClearBasketAndLogout_UK.c" 2

# 1 "CheckoutSecurely.c" 1
CheckoutSecurely()
{
	lr_think_time(1);
	
	web_set_max_retries ("10");
	
	lr_start_transaction("UK-11-CheckoutSecurely");
	

	web_custom_request("execute_2", 
		"URL=https://{p_URL}/web/seam/resource/remoting/execute", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/ca/basketsummary/", 
		"Snapshot=t142.inf", 
		"Mode=HTTP", 
		"EncType=text/plain; charset=UTF-8", 
		"Body=<envelope><header><context><conversationId>5301</conversationId></context></header><body><call component=\"ServerSideStateChecker\" method=\"sessionOk\" id=\"1\">\n<params><param><str>focus</str></param></params><refs></refs></call></body></envelope>", 
		"LAST");

	
	web_set_sockets_option("SSL_VERSION", "TLS");
	
	web_reg_save_param("cid",
	                    "LB=?cid=",
	                    "RB=Vary",
	                    "ORD=1",
	                    "search=Headers",
						"NOTFOUND=Warning",	                     
	                    "LAST");
	
	
	web_reg_save_param("c_ViewState",
	                   "LB=id=\"javax.faces.ViewState\" value=\"",
	                   "RB=\"",
	                   "ORD=1",
	                   "NOTFOUND=Warning",
	                  	"LAST");
	
	web_reg_save_param("c_callradio",
	                   "LB=onclick=\"callRadioSelect(",
	                   "RB=)\">",
	                   "ORD=1",
	                   "NOTFOUND=WARNING",
	                  	"LAST");
	
	web_reg_save_param("c_delcolform",
	                  	"LB={'deliveryCollectionForm:",
	                  	"RB=':",
	                  	"ORD=1",
	                  	"NOTFOUND=WARNING",
	              		"LAST");
	
	web_reg_save_param("c_perftext",  
	                  "LB=<p>This order is using",
	                  "RB=</p>",
	                  "ORD=1",
	                  "NOTFOUND=WARNING",
	                  "LAST");
	
	web_reg_save_param("c_logtext",  
	                  "LB=<span class=\"progressNumber pageTitle\">1</span><span class=\"progressActive progressText\">",
	                  "RB=</span></div>",
	                  "ORD=1",
	                  "NOTFOUND=WARNING",
	                  "LAST");
	
 

	
	web_custom_request("basketsummary_2", 
		"URL=https://{p_URL}/web/ca/basketsummary/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/ca/basketsummary/", 
		"Snapshot=t143.inf", 
		"Mode=HTTP", 
		"Body={Body}",
		"LAST");
	
	lr_end_transaction("UK-11-CheckoutSecurely",2);
	
	 
# 111 "CheckoutSecurely.c"
	lr_think_time(1);
	
	return 0;
}
# 14 "d:\\loadrunner\\scripts\\agile pe\\integrated load testing\\st1\\web\\clearbasketandlogout_uk\\\\combined_ClearBasketAndLogout_UK.c" 2

# 1 "ClearBasketandLogOut.c" 1
ClearBasketandLogOut()
{
	lr_start_transaction("UK-15-ClearBasket");
	web_reg_find("Search=All",
		"SaveCount=",
		"Text=\"page_type\":\"basket\"",
		"LAST");
	web_submit_data("basketsummary",
        "Action=https://{p_URL}/web/ca/basketsummary/", 
        "Method=POST", 
        "TargetFrame=", 
        "RecContentType=text/html", 
        "Referer=http://{p_URL}/web/ca/basketsummary/", 
        "Snapshot=t29.inf", 
        "Mode=HTML", 
        "ITEMDATA", 
        "Name=isRemoveAll", "Value=true", "ENDITEM", 
        "LAST");
	
	web_url("0 �0.00", 
		"URL=https://{p_URL}/web/ca/basketsummary/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/ca/basketsummary/", 
		"Snapshot=t396.inf", 
		"Mode=HTML", 
		"LAST");
	
	lr_end_transaction("UK-15-ClearBasket", 2);
	
	lr_think_time(1);

	lr_start_transaction("UK-16-ClkLogout");
	
	web_url("logout.html", 
		"URL=https://{p_URL}/web/logout.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/home.html", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("web", 
		"URL=https://{p_URL}/web?locale=uk&unique=1453930497500-3350773362913288068", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_URL}/web/logout.html", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"LAST");
	
	lr_end_transaction("UK-16-ClkLogout",2);

	return 0;
}
# 15 "d:\\loadrunner\\scripts\\agile pe\\integrated load testing\\st1\\web\\clearbasketandlogout_uk\\\\combined_ClearBasketAndLogout_UK.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 16 "d:\\loadrunner\\scripts\\agile pe\\integrated load testing\\st1\\web\\clearbasketandlogout_uk\\\\combined_ClearBasketAndLogout_UK.c" 2

