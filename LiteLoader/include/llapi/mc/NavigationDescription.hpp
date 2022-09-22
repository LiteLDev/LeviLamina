/**
 * @file  NavigationDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure NavigationDescription.
 *
 */
struct NavigationDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAVIGATIONDESCRIPTION
public:
    struct NavigationDescription& operator=(struct NavigationDescription const &) = delete;
    NavigationDescription(struct NavigationDescription const &) = delete;
#endif

public:
    /**
     * @hash   716389959
     * @vftbl  0
     * @symbol ?getJsonName@NavigationWalkDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const = 0;
    /**
     * @vftbl  1
     * @symbol __unk_destructor_1
     */
    virtual ~NavigationDescription();
    /**
     * @hash   -1916711401
     * @vftbl  2
     * @symbol ?deserializeData@NavigationDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   -2134015039
     * @vftbl  3
     * @symbol ?serializeData@NavigationDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;
    /**
     * @hash   36168676
     * @symbol ??0NavigationDescription@@QEAA@XZ
     */
    MCAPI NavigationDescription();

};