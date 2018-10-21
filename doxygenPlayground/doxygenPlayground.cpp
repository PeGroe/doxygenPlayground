// doxygenPlayground.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//////////////////////////////////////////////
//********** DOXYGEN DEFINITIONS ***********//
//////////////////////////////////////////////

////////////////////////////
//****** NAMESPACES ******//
////////////////////////////

/** \namespace globProjectNS */

/** \namespace subCompA_NS */
/** \namespace subCompB_NS */

////////////////////////////
//*** GROUPS (Modules) ***//
////////////////////////////

/**
 * \defgroup mainGroup MainGroup
 * Some detailed description about the main group.
 * @{ 
 *   \defgroup CompGroup
 *   @{
 *     \defgroup subCompGroupA
 *     \defgroup subCompGroupB
 *   @}
 * @}
 */

#include <iostream>

int main()
{
    std::cout << "Hello World!\n"; 
}
