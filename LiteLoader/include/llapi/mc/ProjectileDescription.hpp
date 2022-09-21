/**
 * @file  MC/ProjectileDescription.hpp
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
 * @brief MC class ProjectileDescription.
 *
 */
class ProjectileDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROJECTILEDESCRIPTION
public:
    class ProjectileDescription& operator=(class ProjectileDescription const &) = delete;
    ProjectileDescription(class ProjectileDescription const &) = delete;
#endif

public:
    /**
     * @hash   687141185
     * @vftbl  0
     * @symbol ?getJsonName@ProjectileDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol __unk_destructor_1
     */
    virtual ~ProjectileDescription();
    /**
     * @hash   -766521726
     * @vftbl  2
     * @symbol ?deserializeData@ProjectileDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   -1728827476
     * @vftbl  3
     * @symbol ?serializeData@ProjectileDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;
    /**
     * @hash   -1345201057
     * @symbol ??0ProjectileDescription@@QEAA@XZ
     */
    MCAPI ProjectileDescription();

};