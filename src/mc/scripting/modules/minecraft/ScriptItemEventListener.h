#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class ItemEventListener;
enum class EventResult;
namespace ScriptModuleMinecraft { class IScriptAfterEvents; }
namespace Scripting { class WeakLifetimeScope; }
struct ItemCompleteUseEvent;
struct ItemDefinitionEventTriggeredEvent;
struct ItemNotificationEvent;
struct ItemReleaseUseEvent;
struct ItemStartUseEvent;
struct ItemStartUseOnEvent;
struct ItemStopUseEvent;
struct ItemStopUseOnEvent;
struct ItemUseEvent;
struct ItemUsedOnEvent;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemEventListener {

public:
    // prevent constructor by default
    ScriptItemEventListener& operator=(ScriptItemEventListener const&) = delete;
    ScriptItemEventListener(ScriptItemEventListener const&)            = delete;
    ScriptItemEventListener()                                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4(); // NOLINT
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5(); // NOLINT
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6(); // NOLINT
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7(); // NOLINT
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8(); // NOLINT
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9(); // NOLINT
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10(); // NOLINT
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11(); // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13(); // NOLINT
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14(); // NOLINT
    /**
     * @vftbl 15
     * @symbol __unk_vfn_15
     */
    virtual void __unk_vfn_15(); // NOLINT
    /**
     * @vftbl 16
     * @symbol
     * ?onEvent\@ScriptItemEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUItemUseEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ItemUseEvent const&); // NOLINT
    /**
     * @vftbl 17
     * @symbol
     * ?onEvent\@ScriptItemEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUItemUsedOnEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ItemUsedOnEvent const&); // NOLINT
    /**
     * @vftbl 18
     * @symbol
     * ?onEvent\@ScriptItemEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUItemStartUseOnEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ItemStartUseOnEvent const&); // NOLINT
    /**
     * @vftbl 19
     * @symbol
     * ?onEvent\@ScriptItemEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUItemStopUseOnEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ItemStopUseOnEvent const&); // NOLINT
    /**
     * @vftbl 20
     * @symbol
     * ?onEvent\@ScriptItemEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUItemStartUseEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ItemStartUseEvent const&); // NOLINT
    /**
     * @vftbl 21
     * @symbol
     * ?onEvent\@ScriptItemEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUItemCompleteUseEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ItemCompleteUseEvent const&); // NOLINT
    /**
     * @vftbl 22
     * @symbol
     * ?onEvent\@ScriptItemEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUItemReleaseUseEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ItemReleaseUseEvent const&); // NOLINT
    /**
     * @vftbl 23
     * @symbol
     * ?onEvent\@ScriptItemEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUItemStopUseEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ItemStopUseEvent const&); // NOLINT
    /**
     * @vftbl 24
     * @symbol
     * ?onEvent\@?$EventListenerDispatcher\@VItemEventListener\@\@\@\@MEAA?AW4EventResult\@\@AEBUItemNotificationEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ItemNotificationEvent const&); // NOLINT
    /**
     * @vftbl 25
     * @symbol __unk_vfn_25
     */
    virtual void __unk_vfn_25(); // NOLINT
    /**
     * @vftbl 26
     * @symbol
     * ?onEvent\@ScriptItemEventListener\@ScriptModuleMinecraft\@\@UEAA?AW4EventResult\@\@AEBUItemDefinitionEventTriggeredEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ItemDefinitionEventTriggeredEvent const&); // NOLINT
    /**
     * @symbol
     * ??0ScriptItemEventListener\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakLifetimeScope\@Scripting\@\@U?$TypedObjectHandle\@VIScriptAfterEvents\@ScriptModuleMinecraft\@\@\@3\@\@Z
     */
    MCAPI
    ScriptItemEventListener(class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptAfterEvents>); // NOLINT
};

}; // namespace ScriptModuleMinecraft
