/**
 * @file  ProjectileDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @hash   -243967871
     * @vftbl  0
     * @symbol  ?getJsonName\@ProjectileDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol  __unk_destructor_1
     */
    virtual ~ProjectileDescription();
    /**
     * @hash   -1698737854
     * @vftbl  2
     * @symbol  ?deserializeData\@ProjectileDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   1635461292
     * @vftbl  3
     * @symbol  ?serializeData\@ProjectileDescription\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serializeData(class Json::Value &) const;
    /**
     * @hash   2017088831
     * @symbol  ??0ProjectileDescription\@\@QEAA\@XZ
     */
    MCAPI ProjectileDescription();

};