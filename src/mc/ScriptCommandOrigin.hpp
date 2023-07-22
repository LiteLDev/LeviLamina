/**
 * @file  ScriptCommandOrigin.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"
#include "CommandOrigin.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptCommandOrigin.
 *
 */
class ScriptCommandOrigin : public CommandOrigin {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTCOMMANDORIGIN
public:
    class ScriptCommandOrigin& operator=(class ScriptCommandOrigin const &) = delete;
    ScriptCommandOrigin(class ScriptCommandOrigin const &) = delete;
    ScriptCommandOrigin() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ScriptCommandOrigin();
    /**
     * @vftbl  1
     * @symbol  ?getRequestId\@ScriptCommandOrigin\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getRequestId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@ScriptCommandOrigin\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?getBlockPosition\@ScriptCommandOrigin\@\@UEBA?AVBlockPos\@\@XZ
     */
    virtual class BlockPos getBlockPosition() const;
    /**
     * @vftbl  4
     * @symbol  ?getWorldPosition\@ScriptCommandOrigin\@\@UEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 getWorldPosition() const;
    /**
     * @vftbl  5
     * @symbol  ?getRotation\@ScriptCommandOrigin\@\@UEBA?AV?$optional\@VVec2\@\@\@std\@\@XZ
     */
    virtual class std::optional<class Vec2> getRotation() const;
    /**
     * @vftbl  6
     * @symbol  ?getLevel\@ScriptCommandOrigin\@\@UEBAPEAVLevel\@\@XZ
     */
    virtual class Level * getLevel() const;
    /**
     * @vftbl  7
     * @symbol  ?getDimension\@ScriptCommandOrigin\@\@UEBAPEAVDimension\@\@XZ
     */
    virtual class Dimension * getDimension() const;
    /**
     * @vftbl  8
     * @symbol  ?getEntity\@ScriptCommandOrigin\@\@UEBAPEAVActor\@\@XZ
     */
    virtual class Actor * getEntity() const;
    /**
     * @vftbl  9
     * @symbol  ?getPermissionsLevel\@ScriptCommandOrigin\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @vftbl  10
     * @symbol  ?clone\@ScriptCommandOrigin\@\@UEBA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @vftbl  17
     * @symbol  ?canUseCommandsWithoutCheatsEnabled\@ScriptCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /**
     * @vftbl  18
     * @symbol  ?isSelectorExpansionAllowed\@ScriptCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @vftbl  23
     * @symbol  ?getOriginType\@ScriptCommandOrigin\@\@UEBA?AW4CommandOriginType\@\@XZ
     */
    virtual enum class CommandOriginType getOriginType() const;
    /**
     * @vftbl  26
     * @symbol  ?handleCommandOutputCallback\@ScriptCommandOrigin\@\@UEBAXH$$QEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAVValue\@Json\@\@\@Z
     */
    virtual void handleCommandOutputCallback(int, std::string &&, class Json::Value &&) const;
    /**
     * @vftbl  30
     * @symbol  ?isValid\@ScriptCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @symbol  ??0ScriptCommandOrigin\@\@QEAA\@AEAVServerLevel\@\@PEAVDimension\@\@V?$function\@$$A6AXH$$QEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAVValue\@Json\@\@\@Z\@std\@\@\@Z
     */
    MCAPI ScriptCommandOrigin(class ServerLevel &, class Dimension *, class std::function<void (int, std::string &&, class Json::Value &&)>);

};