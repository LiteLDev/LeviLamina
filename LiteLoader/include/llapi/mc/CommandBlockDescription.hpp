/**
 * @file  CommandBlockDescription.hpp
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
 * @brief MC class CommandBlockDescription.
 *
 */
class CommandBlockDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDBLOCKDESCRIPTION
public:
    class CommandBlockDescription& operator=(class CommandBlockDescription const &) = delete;
    CommandBlockDescription(class CommandBlockDescription const &) = delete;
    CommandBlockDescription() = delete;
#endif

public:
    /**
     * @hash   -251369110
     * @vftbl  0
     * @symbol ?getJsonName@CommandBlockDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol __unk_destructor_1
     */
    virtual ~CommandBlockDescription();
    /**
     * @hash   -709047415
     * @vftbl  2
     * @symbol ?deserializeData@CommandBlockDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   -1934008077
     * @vftbl  3
     * @symbol ?serializeData@CommandBlockDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;

};