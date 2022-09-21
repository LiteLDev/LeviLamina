/**
 * @file  MC/IDefinitionInstance.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IDefinitionInstance.
 *
 */
class IDefinitionInstance {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDEFINITIONINSTANCE
public:
    class IDefinitionInstance& operator=(class IDefinitionInstance const &) = delete;
    IDefinitionInstance(class IDefinitionInstance const &) = delete;
    IDefinitionInstance() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~IDefinitionInstance();
    /**
     * @hash   -1903157617
     * @vftbl  1
     * @symbol ?getRuntimeTypeId@IDefinitionInstance@@UEBAGXZ
     */
    virtual unsigned short getRuntimeTypeId() const;

};