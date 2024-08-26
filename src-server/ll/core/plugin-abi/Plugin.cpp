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

static StringNodeMap<Logger> oldLoggers;

Logger& Plugin::getLogger() const {
    return oldLoggers.lazy_emplace(
                         Mod::getName(),
                         [&](auto const& ctor) { ctor(Mod::getName(), Mod::getName()); }
    )->second;
}

} // namespace ll::plugin

#pragma comment(                                                                                                       \
    linker,                                                                                                            \
    "/export:?getLogger@Mod@mod@ll@@QEBAAEAVLogger@3@XZ=?getLogger@Plugin@plugin@ll@@QEBAAEAVLogger@3@XZ"              \
)

#pragma comment(                                                                                                                                                                                                                                                                                                                                                                                                                                          \
    linker,                                                                                                                                                                                                                                                                                                                                                                                                                                               \
    "/export:?getOrCreateCommand@CommandRegistrar@command@ll@@QEAAAEAVCommandHandle@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4CommandPermissionLevel@@UCommandFlag@@V?$weak_ptr@VPlugin@plugin@ll@@@6@@Z=?getOrCreateCommand@CommandRegistrar@command@ll@@QEAAAEAVCommandHandle@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4CommandPermissionLevel@@UCommandFlag@@V?$weak_ptr@VMod@mod@ll@@@6@@Z" \
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
#pragma comment(                                                                                                                                                                                    \
    linker,                                                                                                                                                                                         \
    "/export:??0OverloadData@command@ll@@IEAA@AEAVCommandHandle@12@V?$weak_ptr@VPlugin@plugin@ll@@@std@@@Z=??0OverloadData@command@ll@@IEAA@AEAVCommandHandle@12@V?$weak_ptr@VMod@mod@ll@@@std@@@Z" \
)
#pragma comment(                                                                                                                                                                            \
    linker,                                                                                                                                                                                 \
    "/export:??0ListenerBase@event@ll@@IEAA@W4EventPriority@12@V?$weak_ptr@VPlugin@plugin@ll@@@std@@@Z=??0ListenerBase@event@ll@@IEAA@W4EventPriority@12@V?$weak_ptr@VMod@mod@ll@@@std@@@Z" \
)


#pragma comment(                                                                                                                                                                                \
    linker,                                                                                                                                                                                     \
    "/export:?resolveIdentifier@memory@ll@@YAPEAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@_N@Z=?resolveSymbol@memory@ll@@YAPEAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@_N@Z" \
)


#pragma comment(                                                                                                       \
    linker,                                                                                                            \
    "/export:?getServerStatus@ll@@YA?AW4ServerStatus@1@XZ=?getGamingStatus@ll@@YA?AW4GamingStatus@1@XZ"                \
)
#pragma comment(                                                                                                       \
    linker,                                                                                                            \
    "/export:?setServerStatus@ll@@YAXW4ServerStatus@1@@Z=?setGamingStatus@ll@@YAXW4GamingStatus@1@@Z"                  \
)
#pragma comment(                                                                                                                \
    linker,                                                                                                                     \
    "/export:?self@PlayerEvent@player@event@ll@@QEBAAEAVServerPlayer@@XZ=?self@PlayerEvent@player@event@ll@@QEBAAEAVPlayer@@XZ" \
)
#pragma comment(                                                                                                                                                                \
    linker,                                                                                                                                                                     \
    "/export:?disconnect@Player@@QEBAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z=?disconnect@ServerPlayer@@QEBAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z" \
)
#pragma comment(                                                                                                                                              \
    linker,                                                                                                                                                   \
    "/export:?getCertificate@Player@@QEBA?AV?$optional_ref@$$CBVCertificate@@@@XZ=?getCertificate@ServerPlayer@@QEBA?AV?$optional_ref@$$CBVCertificate@@@@XZ" \
)
#pragma comment(                                                                                                       \
    linker,                                                                                                            \
    "/export:?getClientSubId@Player@@QEBAAEBW4SubClientId@@XZ=?getClientSubId@ServerPlayer@@QEBAAEBW4SubClientId@@XZ"  \
)
#pragma comment(                                                                                                                                                                      \
    linker,                                                                                                                                                                           \
    "/export:?getConnectionRequest@Player@@QEBA?AV?$optional_ref@$$CBVConnectionRequest@@@@XZ=?getConnectionRequest@ServerPlayer@@QEBA?AV?$optional_ref@$$CBVConnectionRequest@@@@XZ" \
)
#pragma comment(                                                                                                                                                                                              \
    linker,                                                                                                                                                                                                   \
    "/export:?getIPAndPort@Player@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ=?getIPAndPort@ServerPlayer@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ" \
)
#pragma comment(                                                                                                                                                                                                \
    linker,                                                                                                                                                                                                     \
    "/export:?getLocaleName@Player@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ=?getLocaleCode@ServerPlayer@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ" \
)
#pragma comment(                                                                                                                            \
    linker,                                                                                                                                 \
    "/export:?getNetworkIdentifier@Player@@QEBAAEBVNetworkIdentifier@@XZ=?getNetworkIdentifier@ServerPlayer@@QEBAAEBVNetworkIdentifier@@XZ" \
)
#pragma comment(                                                                                                                                                                      \
    linker,                                                                                                                                                                           \
    "/export:?getNetworkStatus@Player@@QEBA?AV?$optional@UNetworkStatus@NetworkPeer@@@std@@XZ=?getNetworkStatus@ServerPlayer@@QEBA?AV?$optional@UNetworkStatus@NetworkPeer@@@std@@XZ" \
)
#pragma comment(                                                                                                                                                          \
    linker,                                                                                                                                                               \
    "/export:?getUserEntityIdentifier@Player@@QEAAAEAVUserEntityIdentifierComponent@@XZ=?getUserEntityIdentifier@ServerPlayer@@QEAAAEAVUserEntityIdentifierComponent@@XZ" \
)
#pragma comment(                                                                                                                                                          \
    linker,                                                                                                                                                               \
    "/export:?getUserEntityIdentifier@Player@@QEBAAEBVUserEntityIdentifierComponent@@XZ=?getUserEntityIdentifier@ServerPlayer@@QEBAAEBVUserEntityIdentifierComponent@@XZ" \
)
#pragma comment(linker, "/export:?getUuid@Player@@QEBAAEBVUUID@mce@@XZ=?getUuid@ServerPlayer@@QEBAAEBVUUID@mce@@XZ")

#pragma comment(linker, "/export:?sendTo@Packet@@QEBAXAEBVPlayer@@@Z=?sendTo@Packet@@QEBAXAEBVServerPlayer@@@Z")
