#include "ll/core/plugin-abi/Plugin.h"

namespace ll::plugin {
using namespace mod;
std::filesystem::path const& getPluginsRoot() { return getModsRoot(); }

Plugin::Plugin(Manifest manifest) : Mod(std::move(manifest)) {}
Plugin::~Plugin() = default;

Manifest const& Plugin::getManifest() const { return (Manifest const&)Mod::getManifest(); }

std::filesystem::path const& Plugin::getPluginDir() const { return Mod::getModDir(); }

std::filesystem::path const& Plugin::getDataDir() const { return Mod::getDataDir(); }

std::filesystem::path const& Plugin::getConfigDir() const { return Mod::getConfigDir(); }

std::filesystem::path const& Plugin::getLangDir() const { return Mod::getLangDir(); }

bool Plugin::hasOnLoad() const noexcept { return Mod::hasOnLoad(); }

bool Plugin::hasOnUnload() const noexcept { return Mod::hasOnUnload(); }

bool Plugin::hasOnEnable() const noexcept { return Mod::hasOnEnable(); }

bool Plugin::hasOnDisable() const noexcept { return Mod::hasOnDisable(); }

Expected<> Plugin::onLoad() noexcept { return Mod::onLoad(); }

Expected<> Plugin::onUnload() noexcept { return Mod::onUnload(); }

Expected<> Plugin::onEnable() noexcept { return Mod::onEnable(); }

Expected<> Plugin::onDisable() noexcept { return Mod::onDisable(); }

void Plugin::onLoad(CallbackFn func) noexcept { return Mod::onLoad(std::move((Mod::CallbackFn&)func)); }

void Plugin::onUnload(CallbackFn func) noexcept { return Mod::onUnload(std::move((Mod::CallbackFn&)func)); }

void Plugin::onEnable(CallbackFn func) noexcept { return Mod::onEnable(std::move((Mod::CallbackFn&)func)); }

void Plugin::onDisable(CallbackFn func) noexcept { return Mod::onDisable(std::move((Mod::CallbackFn&)func)); }

void Plugin::setState(State state) const { return Mod::setState((Mod::State)state); }

Plugin::State Plugin::getState() const { return (State)Mod::getState(); }

Logger& Plugin::getLogger() const { return Mod::getLogger(); }

} // namespace ll::plugin

#pragma comment(                                                                                                                                                                                \
    linker,                                                                                                                                                                                     \
    "/export:?resolveIdentifier@memory@ll@@YAPEAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@_N@Z=?resolveSymbol@memory@ll@@YAPEAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@_N@Z" \
)

// @V?$weak_ptr@VPlugin@plugin@ll@@

#pragma comment(                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      \
    linker,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           \
    "/export:??$_Try_emplace@AEBVEventId@event@ll@@V?$function@$$A6A?AV?$unique_ptr@VEmitterBase@event@ll@@U?$default_delete@VEmitterBase@event@ll@@@std@@@std@@AEAVListenerBase@event@ll@@@Z@std@@V?$weak_ptr@VPlugin@plugin@ll@@@5@@?$_Hash@V?$_Umap_traits@VEventId@event@ll@@UFactory@EventBusImpl@EventBus@23@V?$_Uhash_compare@VEventId@event@ll@@U?$hash@VEventId@event@ll@@@std@@U?$equal_to@VEventId@event@ll@@@5@@std@@V?$allocator@U?$pair@$$CBVEventId@event@ll@@UFactory@EventBusImpl@EventBus@23@@std@@@8@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBVEventId@event@ll@@UFactory@EventBusImpl@EventBus@23@@std@@PEAX@std@@_N@1@AEBVEventId@event@ll@@$$QEAV?$function@$$A6A?AV?$unique_ptr@VEmitterBase@event@ll@@U?$default_delete@VEmitterBase@event@ll@@@std@@@std@@AEAVListenerBase@event@ll@@@Z@1@$$QEAV?$weak_ptr@VPlugin@plugin@ll@@@1@@Z=??$_Try_emplace@AEBVEventId@event@ll@@V?$function@$$A6A?AV?$unique_ptr@VEmitterBase@event@ll@@U?$default_delete@VEmitterBase@event@ll@@@std@@@std@@AEAVListenerBase@event@ll@@@Z@std@@V?$weak_ptr@VMod@mod@ll@@@5@@?$_Hash@V?$_Umap_traits@VEventId@event@ll@@UFactory@EventBusImpl@EventBus@23@V?$_Uhash_compare@VEventId@event@ll@@U?$hash@VEventId@event@ll@@@std@@U?$equal_to@VEventId@event@ll@@@5@@std@@V?$allocator@U?$pair@$$CBVEventId@event@ll@@UFactory@EventBusImpl@EventBus@23@@std@@@8@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBVEventId@event@ll@@UFactory@EventBusImpl@EventBus@23@@std@@PEAX@std@@_N@1@AEBVEventId@event@ll@@$$QEAV?$function@$$A6A?AV?$unique_ptr@VEmitterBase@event@ll@@U?$default_delete@VEmitterBase@event@ll@@@std@@@std@@AEAVListenerBase@event@ll@@@Z@1@$$QEAV?$weak_ptr@VMod@mod@ll@@@1@@Z" \
)
#pragma comment(                                                                                                                                                                                                                                                                                                                                                                                                                                          \
    linker,                                                                                                                                                                                                                                                                                                                                                                                                                                               \
    "/export:?getOrCreateCommand@CommandRegistrar@command@ll@@QEAAAEAVCommandHandle@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4CommandPermissionLevel@@UCommandFlag@@V?$weak_ptr@VPlugin@plugin@ll@@@6@@Z=?getOrCreateCommand@CommandRegistrar@command@ll@@QEAAAEAVCommandHandle@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4CommandPermissionLevel@@UCommandFlag@@V?$weak_ptr@VMod@mod@ll@@@6@@Z" \
)
#pragma comment(                                                                                                                                                                                                                                                                                                                                                                                                          \
    linker,                                                                                                                                                                                                                                                                                                                                                                                                               \
    "/export:??$?0NU?$ratio@$0DM@$00@std@@@?$DelayTask@Usystem_clock@chrono@std@@@task@schedule@ll@@QEAA@V?$duration@NU?$ratio@$0DM@$00@std@@@chrono@std@@V?$function@$$A6AXXZ@6@V?$weak_ptr@VPlugin@plugin@ll@@@6@@Z=??$?0NU?$ratio@$0DM@$00@std@@@?$DelayTask@Usystem_clock@chrono@std@@@task@schedule@ll@@QEAA@V?$duration@NU?$ratio@$0DM@$00@std@@@chrono@std@@V?$function@$$A6AXXZ@6@V?$weak_ptr@VMod@mod@ll@@@6@@Z" \
)
#pragma comment(                                                                                                                                                                                                                                                                                                                                                                      \
    linker,                                                                                                                                                                                                                                                                                                                                                                           \
    "/export:??0?$Listener@VPlayerChatEvent@player@event@ll@@@event@ll@@QEAA@V?$function@$$A6AXAEAVPlayerChatEvent@player@event@ll@@@Z@std@@W4EventPriority@12@V?$weak_ptr@VPlugin@plugin@ll@@@4@@Z=??0?$Listener@VPlayerChatEvent@player@event@ll@@@event@ll@@QEAA@V?$function@$$A6AXAEAVPlayerChatEvent@player@event@ll@@@Z@std@@W4EventPriority@12@V?$weak_ptr@VMod@mod@ll@@@4@@Z" \
)
#pragma comment(                                                                                                                                                                                                                                                                                                                                                                                                                                                                            \
    linker,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 \
    "/export:?setEventEmitter@EventBus@event@ll@@QEAAXV?$function@$$A6A?AV?$unique_ptr@VEmitterBase@event@ll@@U?$default_delete@VEmitterBase@event@ll@@@std@@@std@@AEAVListenerBase@event@ll@@@Z@std@@VEventId@23@V?$weak_ptr@VPlugin@plugin@ll@@@5@@Z=?setEventEmitter@EventBus@event@ll@@QEAAXV?$function@$$A6A?AV?$unique_ptr@VEmitterBase@event@ll@@U?$default_delete@VEmitterBase@event@ll@@@std@@@std@@AEAVListenerBase@event@ll@@@Z@std@@VEventId@23@V?$weak_ptr@VMod@mod@ll@@@5@@Z" \
)
#pragma comment(                                                                                                                                                                                                                  \
    linker,                                                                                                                                                                                                                       \
    "/export:?runtimeOverload@CommandHandle@command@ll@@QEAA?AVRuntimeOverload@23@V?$weak_ptr@VPlugin@plugin@ll@@@std@@@Z=?runtimeOverload@CommandHandle@command@ll@@QEAA?AVRuntimeOverload@23@V?$weak_ptr@VMod@mod@ll@@@std@@@Z" \
)
#pragma comment(                                                                                                                                                                                          \
    linker,                                                                                                                                                                                               \
    "/export:??0RuntimeOverload@command@ll@@AEAA@AEAVCommandHandle@12@V?$weak_ptr@VPlugin@plugin@ll@@@std@@@Z=??0RuntimeOverload@command@ll@@AEAA@AEAVCommandHandle@12@V?$weak_ptr@VMod@mod@ll@@@std@@@Z" \
)
#pragma comment(                                                                                                                                                                                                                                                                                                                                                                      \
    linker,                                                                                                                                                                                                                                                                                                                                                                           \
    "/export:??0?$Listener@VPlayerJoinEvent@player@event@ll@@@event@ll@@QEAA@V?$function@$$A6AXAEAVPlayerJoinEvent@player@event@ll@@@Z@std@@W4EventPriority@12@V?$weak_ptr@VPlugin@plugin@ll@@@4@@Z=??0?$Listener@VPlayerJoinEvent@player@event@ll@@@event@ll@@QEAA@V?$function@$$A6AXAEAVPlayerJoinEvent@player@event@ll@@@Z@std@@W4EventPriority@12@V?$weak_ptr@VMod@mod@ll@@@4@@Z" \
)
#pragma comment(                                                                                                                                                                                                                                                                                                                                                                                                  \
    linker,                                                                                                                                                                                                                                                                                                                                                                                                       \
    "/export:??0?$Listener@VExecutingCommandEvent@command@event@ll@@@event@ll@@QEAA@V?$function@$$A6AXAEAVExecutingCommandEvent@command@event@ll@@@Z@std@@W4EventPriority@12@V?$weak_ptr@VPlugin@plugin@ll@@@4@@Z=??0?$Listener@VExecutingCommandEvent@command@event@ll@@@event@ll@@QEAA@V?$function@$$A6AXAEAVExecutingCommandEvent@command@event@ll@@@Z@std@@W4EventPriority@12@V?$weak_ptr@VMod@mod@ll@@@4@@Z" \
)
#pragma comment(                                                                                                                                                                                    \
    linker,                                                                                                                                                                                         \
    "/export:??0OverloadData@command@ll@@IEAA@AEAVCommandHandle@12@V?$weak_ptr@VPlugin@plugin@ll@@@std@@@Z=??0OverloadData@command@ll@@IEAA@AEAVCommandHandle@12@V?$weak_ptr@VMod@mod@ll@@@std@@@Z" \
)
#pragma comment(                                                                                                                                                                            \
    linker,                                                                                                                                                                                 \
    "/export:??0ListenerBase@event@ll@@IEAA@W4EventPriority@12@V?$weak_ptr@VPlugin@plugin@ll@@@std@@@Z=??0ListenerBase@event@ll@@IEAA@W4EventPriority@12@V?$weak_ptr@VMod@mod@ll@@@std@@@Z" \
)
#pragma comment(                                                                                                                                                                                                                                                                                                                                                                                              \
    linker,                                                                                                                                                                                                                                                                                                                                                                                                   \
    "/export:??0?$Listener@VPlayerChangePermEvent@player@event@ll@@@event@ll@@QEAA@V?$function@$$A6AXAEAVPlayerChangePermEvent@player@event@ll@@@Z@std@@W4EventPriority@12@V?$weak_ptr@VPlugin@plugin@ll@@@4@@Z=??0?$Listener@VPlayerChangePermEvent@player@event@ll@@@event@ll@@QEAA@V?$function@$$A6AXAEAVPlayerChangePermEvent@player@event@ll@@@Z@std@@W4EventPriority@12@V?$weak_ptr@VMod@mod@ll@@@4@@Z" \
)