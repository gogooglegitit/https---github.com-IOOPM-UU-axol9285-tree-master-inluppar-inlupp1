#include <CUnit/Basic.h>
#include "hash_table.h"

//hej
//cd /mnt/c/Users/axelo/onedrive/Dokument/Pro/
int init_suite(void) {
    return 0;
}
int clean_suite(void) {
    return 0;
}

void test_create_destroy()
{
   ioopm_hash_table_t *ht = ioopm_hash_table_create();
   CU_ASSERT_PTR_NOT_NULL(ht);
   ioopm_hash_table_destroy(ht);
   CU_ASSERT_PTR_NULL(ht);
}


int main()
{
    if (CU_initialize_registry() != CUE_SUCCESS)
        {return CU_get_error();}

        CU_pSuite my_test_suite = CU_add_suite("My test suite",init_suite,clean_suite);
        if (my_test_suite == NULL) {
            CU_cleanup_registry();
            return CU_get_error();
        }

    if (
        (CU_add_test(my_test_suite,"creat and destroy", test_create_destroy)==NULL)||
        0
    )
    {
        CU_cleanup_registry();
        return CU_get_error();
    }

    CU_basic_set_mode(CU_BRM_VERBOSE);

    CU_basic_run_tests();

    CU_cleanup_registry();
    return CU_get_error();
}