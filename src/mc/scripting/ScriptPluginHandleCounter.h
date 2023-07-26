#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { struct ObjectHandle; }
// clang-format on

class ScriptPluginHandleCounter {
public:
    // ScriptPluginHandleCounter inner types declare
    // clang-format off
    struct TypeStats;
    // clang-format on

    // ScriptPluginHandleCounter inner types define
    struct TypeStats {

    public:
        // prevent constructor by default
        TypeStats& operator=(TypeStats const&) = delete;
        TypeStats(TypeStats const&)            = delete;
        TypeStats()                            = delete;

    public:
        /**
         * @symbol ??1TypeStats\@ScriptPluginHandleCounter\@\@QEAA\@XZ
         */
        MCAPI ~TypeStats(); // NOLINT
    };

public:
    // prevent constructor by default
    ScriptPluginHandleCounter& operator=(ScriptPluginHandleCounter const&) = delete;
    ScriptPluginHandleCounter(ScriptPluginHandleCounter const&)            = delete;
    ScriptPluginHandleCounter()                                            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?onMakeObject\@ScriptPluginHandleCounter\@\@UEAAXAEAVLifetimeRegistry\@Scripting\@\@UObjectHandle\@3\@AEBVmeta_type\@entt\@\@I\@Z
     */
    virtual void onMakeObject(
        class Scripting::LifetimeRegistry&,
        struct Scripting::ObjectHandle,
        class entt::meta_type const&,
        unsigned int
    ); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?onDestroyObject\@ScriptPluginHandleCounter\@\@UEAAXAEAVLifetimeRegistry\@Scripting\@\@UObjectHandle\@3\@AEBVmeta_type\@entt\@\@I\@Z
     */
    virtual void onDestroyObject(
        class Scripting::LifetimeRegistry&,
        struct Scripting::ObjectHandle,
        class entt::meta_type const&,
        unsigned int
    ); // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?onTrackObject\@ScriptPluginHandleCounter\@\@UEAAXAEAVLifetimeRegistry\@Scripting\@\@UObjectHandle\@3\@AEBVmeta_type\@entt\@\@I\@Z
     */
    virtual void onTrackObject(
        class Scripting::LifetimeRegistry&,
        struct Scripting::ObjectHandle,
        class entt::meta_type const&,
        unsigned int
    ); // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?onUntrackObject\@ScriptPluginHandleCounter\@\@UEAAXAEAVLifetimeRegistry\@Scripting\@\@UObjectHandle\@3\@AEBVmeta_type\@entt\@\@I\@Z
     */
    virtual void onUntrackObject(
        class Scripting::LifetimeRegistry&,
        struct Scripting::ObjectHandle,
        class entt::meta_type const&,
        unsigned int
    ); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTPLUGINHANDLECOUNTER
    /**
     * @symbol
     * ?onObjectPromotedToMultipleOwners\@ScriptPluginHandleCounter\@\@UEAAXAEAVLifetimeRegistry\@Scripting\@\@UObjectHandle\@3\@\@Z
     */
    MCVAPI void
    onObjectPromotedToMultipleOwners(class Scripting::LifetimeRegistry&, struct Scripting::ObjectHandle); // NOLINT
    /**
     * @symbol
     * ?onObjectReducedToSingleOwner\@ScriptPluginHandleCounter\@\@UEAAXAEAVLifetimeRegistry\@Scripting\@\@UObjectHandle\@3\@\@Z
     */
    MCVAPI void
    onObjectReducedToSingleOwner(class Scripting::LifetimeRegistry&, struct Scripting::ObjectHandle); // NOLINT
    /**
     * @symbol ?onPostLifetimeScopeDestroy\@ScriptPluginHandleCounter\@\@UEAAXAEAVLifetimeRegistry\@Scripting\@\@\@Z
     */
    MCVAPI void onPostLifetimeScopeDestroy(class Scripting::LifetimeRegistry&); // NOLINT
    /**
     * @symbol ?onPreLifetimeScopeDestroy\@ScriptPluginHandleCounter\@\@UEAAXAEAVLifetimeRegistry\@Scripting\@\@\@Z
     */
    MCVAPI void onPreLifetimeScopeDestroy(class Scripting::LifetimeRegistry&); // NOLINT
#endif

    // private:
    /**
     * @symbol ?_getOrMakeStats\@ScriptPluginHandleCounter\@\@AEAAPEAUTypeStats\@1\@AEBVmeta_type\@entt\@\@\@Z
     */
    MCAPI struct ScriptPluginHandleCounter::TypeStats* _getOrMakeStats(class entt::meta_type const&); // NOLINT

private:
};
