#include <stdbool.h>
#include<stdint.h>

void init();
uint64_t new_circuit_capacity_checker();
void reset_circuit_capacity_checker(uint64_t id);
char* apply_tx(uint64_t id, void* tx_traces);
char* apply_block(uint64_t id, void* block_trace);
char* get_tx_num(uint64_t id);
char* set_light_mode(uint64_t id, bool light_mode);
void free_c_chars(char* ptr);
void* parse_json_to_rust_trace(char* trace_json_ptr);
void free_rust_trace(void* trace_ptr);
