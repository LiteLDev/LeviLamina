/**
 * @file  TeleportDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TeleportDescription.
 *
 */
class TeleportDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TELEPORTDESCRIPTION
public:
    class TeleportDescription& operator=(class TeleportDescription const &) = delete;
    TeleportDescription(class TeleportDescription const &) = delete;
#endif

public:
    /**
     * @hash   2029762547
     * @vftbl  0
     * @symbol  ?getJsonName\@TeleportDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol  __unk_destructor_1
     */
    virtual ~TeleportDescription();
    /**
     * @hash   495474928
     * @vftbl  2
     * @symbol  ?deserializeData\@TeleportDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   609807002
     * @vftbl  3
     * @symbol  ?serializeData\@TeleportDescription\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serializeData(class Json::Value &) const;
    /**
     * @hash   1678795805
     * @symbol  ??0TeleportDescription\@\@QEAA\@XZ
     */
    MCAPI TeleportDescription();

};