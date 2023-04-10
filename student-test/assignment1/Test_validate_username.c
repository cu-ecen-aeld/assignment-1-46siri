#include "unity.h"
#include <stdbool.h>
#include <stdlib.h>
#include "../../examples/autotest-validate/autotest-validate.h"
#include "../../assignment-autotest/test/assignment1/username-from-conf-file.h"

/**
* This function should:
*   1) Call the my_username() function in autotest-validate.c to get your hard coded username.
*   2) Obtain the value returned from function malloc_username_from_conf_file() in username-from-conf-file.h within
*       the assignment autotest submodule at assignment-autotest/test/assignment1/
*   3) Use unity assertion TEST_ASSERT_EQUAL_STRING_MESSAGE to verify the two strings are equal.  See
*       the [unity assertion reference](https://github.com/ThrowTheSwitch/Unity/blob/master/docs/UnityAssertionsReference.md)
*/
void test_validate_my_username()
{
    /**
     * TODO: Replace the line below with your code here as described above to verify your /conf/username.txt 
     * config file and my_username() functions are setup properly
     */
    // Step 1: Get hard coded username from autotest-validate.c
    const char* expected_username = my_username();
    // Step 2: Get username from configuration file using function from username-from-conf-file.h
    char* actual_username = malloc_username_from_conf_file();
    // Step 3: Verify the two strings are equal using unity assertion TEST_ASSERT_EQUAL_STRING_MESSAGE
    TEST_ASSERT_EQUAL_STRING_MESSAGE(expected_username, actual_username, "Username from config file does not match expected username.");
    // Free allocated memory
    free(actual_username);
}
