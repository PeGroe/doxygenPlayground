#pragma once

namespace globProjectNS
{
  /*! \addtogroup CompGroup
   *  @{ */

   /*! \class IMyInterface IMyInterface.h "IMyInterface.h"
   *   \brief This is the main interface class.
   *
   *  Some details about the main interface class.
   */
  class IMyInterface
  {
  public:
    //! Default destructor
    virtual ~IMyInterface() = default;

    /*! @brief This is the first example function. 
    *
    *   Some detailed function description.
    */
    virtual void exampleFunction1() = 0;

    /*! @brief This is the second example function.
    *
    *   Some detailed function description.
    *
    *   @param[in]    paramIn    An integer value.
    */
    virtual void exampleFunction2(int paramIn) = 0;

    /*! @brief This is the third example function.
    *
    *   Some detailed function description.
    *
    *   @param[out]   paramOut    An integer value.
    *   @return                   Return value indicating success or error.
    */
    virtual int exampleFunction3(int* paramOut) = 0;
  };
  /*! @} */
}
