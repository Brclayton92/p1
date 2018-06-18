#include <iostream>
#include "stack_p1.h"
#include "stacks_for_regular_languages.h"
using namespace std;

int main() {

    /*
     * test 0 start
     */
    string inputString = "AAABBB";
    stacks_for_regular_languages sfrl;
    char* inputCharPtr = &inputString[0];

    if (sfrl.L2(inputCharPtr) == false) {
        cout << "problem with L2. " << inputString << " returned false, should be true." << endl << endl;
    }

    if (sfrl.L3(inputCharPtr) == false){
        cout << "problem with L3. " << inputString << " returned false, should be true."<< endl << endl;
    }

    if (sfrl.L4(inputCharPtr) == false){
        cout << "problem with L4. " << inputString << " returned false, should be true."<< endl << endl;
    }
    /*
     * test 0 end
     */

    /*
 * test 1 start
 */
    inputString = "AB";
    inputCharPtr = &inputString[0];

    if (sfrl.L2(inputCharPtr) == false) {
        cout << "problem with L2. " << inputString << " returned false, should be true."<< endl << endl;
    }

    if (sfrl.L3(inputCharPtr) == false){
        cout << "problem with L3. " << inputString << " returned false, should be true."<< endl << endl;
    }

    if (sfrl.L4(inputCharPtr) == false){
        cout << "problem with L4. " << inputString << " returned false, should be true."<< endl << endl;
    }
    /*
     * test 1 end
     */

    /*
* test 2 start
*/
    inputString = "E";
    inputCharPtr = &inputString[0];

    if (sfrl.L2(inputCharPtr) == true) {
        cout << "problem with L2. " << inputString << " returned true, should be false."<< endl << endl;
    }

    if (sfrl.L3(inputCharPtr) == true){
        cout << "problem with L3. " << inputString << " returned true, should be false."<< endl << endl;
    }

    if (sfrl.L4(inputCharPtr) == true){
        cout << "problem with L4. " << inputString << " returned true, should be false."<< endl << endl;
    }
    /*
     * test 2 end
     */

    /*
* test 3 start
*/
    inputString = "";
    inputCharPtr = &inputString[0];

    if (sfrl.L2(inputCharPtr) == true) {
        cout << "problem with L2. " << inputString << " returned true, should be false."<< endl << endl;
    }

    if (sfrl.L3(inputCharPtr) == true){
        cout << "problem with L3. " << inputString << " returned true, should be false."<< endl << endl;
    }

    if (sfrl.L4(inputCharPtr) == true){
        cout << "problem with L4. " << inputString << " returned true, should be false."<< endl << endl;
    }
    /*
     * test 3 end
     */

    /*
* test 4 start
*/
    inputString = "ABABABA";
    inputCharPtr = &inputString[0];

    if (sfrl.L2(inputCharPtr) == true) {
        cout << "problem with L2. " << inputString << " returned true, should be false."<< endl << endl;
    }

    if (sfrl.L3(inputCharPtr) == true){
        cout << "problem with L3. " << inputString << " returned true, should be false."<< endl << endl;
    }

    if (sfrl.L4(inputCharPtr) == true){
        cout << "problem with L4. " << inputString << " returned true, should be false."<< endl << endl;
    }
    /*
     * test 4 end
     */

    /*
* test 5 start
*/
    inputString = "ABAB";
    inputCharPtr = &inputString[0];

    if (sfrl.L2(inputCharPtr) == true) {
        cout << "problem with L2. " << inputString << " returned true, should be false."<< endl << endl;
    }

    if (sfrl.L3(inputCharPtr) == false){
        cout << "problem with L3. " << inputString << " returned false, should be true."<< endl << endl;
    }

    if (sfrl.L4(inputCharPtr) == false){
        cout << "problem with L4. " << inputString << " returned false, should be true."<< endl << endl;
    }
    /*
     * test 5 end
     */

    /*
* test 6 start
*/
    inputString = "BBAA";
    inputCharPtr = &inputString[0];

    if (sfrl.L2(inputCharPtr) == true) {
        cout << "problem with L2. " << inputString << " returned true, should be false."<< endl << endl;
    }

    if (sfrl.L3(inputCharPtr) == true){

        cout << "problem with L3. " << inputString << " returned true, should be false."<< endl << endl;
    }

    if (sfrl.L4(inputCharPtr) == true){
        cout << "problem with L4. " << inputString << " returned true, should be false."<< endl << endl;
    }
    /*
     * test 6 end
     */

    /*
* test 7 start
*/
    inputString = "AAB";
    inputCharPtr = &inputString[0];

    if (sfrl.L2(inputCharPtr) == true) {
        cout << "problem with L2. " << inputString << " returned true, should be false."<< endl << endl;
    }

    if (sfrl.L3(inputCharPtr) == true){
        cout << "problem with L3. " << inputString << " returned true, should be false."<< endl << endl;
    }

    if (sfrl.L4(inputCharPtr) == false){
        cout << "problem with L4. " << inputString << " returned false, should be true."<< endl << endl;
    }
    /*
     * test 7 end
     */

    /*
* test 8 start
*/
    inputString = "AABB";
    inputCharPtr = &inputString[0];

    if (sfrl.L2(inputCharPtr) == false) {
        cout << "problem with L2. " << inputString << " returned false, should be true."<< endl << endl;
    }

    if (sfrl.L3(inputCharPtr) == false){
        cout << "problem with L3. " << inputString << " returned false, should be true."<< endl << endl;
    }

    if (sfrl.L4(inputCharPtr) == false){
        cout << "problem with L4. " << inputString << " returned false, should be true."<< endl << endl;
    }
    /*
     * test 8 end
     */

    /*
* test 9 start
*/
    inputString = "ABCBA";
    inputCharPtr = &inputString[0];

    if (sfrl.L2(inputCharPtr) == true) {
        cout << "problem with L2. " << inputString << " returned true, should be false."<< endl << endl;
    }

    if (sfrl.L3(inputCharPtr) == true){
        cout << "problem with L3. " << inputString << " returned true, should be false."<< endl << endl;
    }

    if (sfrl.L4(inputCharPtr) == true){
        cout << "problem with L4. " << inputString << " returned true, should be false."<< endl << endl;
    }
    /*
     * test 9 end
     */

    /*
* test 10 start
*/
    inputString = "ABBBA";
    inputCharPtr = &inputString[0];

    if (sfrl.L2(inputCharPtr) == true) {
        cout << "problem with L2. " << inputString << " returned true, should be false."<< endl << endl;
    }

    if (sfrl.L3(inputCharPtr) == true){
        cout << "problem with L3. " << inputString << " returned true, should be false."<< endl << endl;
    }

    if (sfrl.L4(inputCharPtr) == true){
        cout << "problem with L4. " << inputString << " returned true, should be false."<< endl << endl;
    }
    /*
     * test 10 end
     */

    /*
* test 11 start
*/
    inputString = "ABBA";
    inputCharPtr = &inputString[0];

    if (sfrl.L2(inputCharPtr) == true) {
        cout << "problem with L2. " << inputString << " returned true, should be false."<< endl << endl;
    }

    if (sfrl.L3(inputCharPtr) == true){
        cout << "problem with L3. " << inputString << " returned true, should be false."<< endl << endl;
    }

    if (sfrl.L4(inputCharPtr) == true){
        cout << "problem with L4. " << inputString << " returned true, should be false."<< endl << endl;
    }
    /*
     * test 11 end
     */

    /*
* test 12 start
*/
    inputString = "ABAABBAAABBB";
    inputCharPtr = &inputString[0];

    if (sfrl.L2(inputCharPtr) == true) {
        cout << "problem with L2. " << inputString << " returned true, should be false."<< endl << endl;
    }

    if (sfrl.L3(inputCharPtr) == true){
        cout << "problem with L3. " << inputString << " returned true, should be false."<< endl << endl;
    }

    if (sfrl.L4(inputCharPtr) == true){
        cout << "problem with L4. " << inputString << " returned true, should be false."<< endl << endl;
    }
    /*
     * test 12 end
     */

    /*
* test 13 start
*/
    inputString = "AA";
    inputCharPtr = &inputString[0];

    if (sfrl.L2(inputCharPtr) == true) {
        cout << "problem with L2. " << inputString << " returned true, should be false."<< endl << endl;
    }

    if (sfrl.L3(inputCharPtr) == true){
        cout << "problem with L3. " << inputString << " returned true, should be false."<< endl << endl;
    }

    if (sfrl.L4(inputCharPtr) == true){
        cout << "problem with L4. " << inputString << " returned true, should be false."<< endl << endl;
    }
    /*
     * test 13 end
     */

    /*
* test 14 start
*/
    inputString = "AABBBAABBB";
    inputCharPtr = &inputString[0];

    if (sfrl.L2(inputCharPtr) == true) {
        cout << "problem with L2. " << inputString << " returned true, should be false."<< endl << endl;
    }

    if (sfrl.L3(inputCharPtr) == true){
        cout << "problem with L3. " << inputString << " returned true, should be false."<< endl << endl;
    }

    if (sfrl.L4(inputCharPtr) == false){
        cout << "problem with L4. " << inputString << " returned false, should be true."<< endl << endl;
    }
    /*
     * test 14 end
     */

    /*
* test 15 start
*/
    inputString = "AABBAABBAABB";
    inputCharPtr = &inputString[0];

    if (sfrl.L2(inputCharPtr) == true) {
        cout << "problem with L2. " << inputString << " returned true, should be false."<< endl << endl;
    }

    if (sfrl.L3(inputCharPtr) == false){
        cout << "problem with L3. " << inputString << " returned false, should be true."<< endl << endl;
    }

    if (sfrl.L4(inputCharPtr) == false){
        cout << "problem with L4. " << inputString << " returned false, should be true."<< endl << endl;
    }
    /*
     * test 15 end
     */
    return 0;
}
