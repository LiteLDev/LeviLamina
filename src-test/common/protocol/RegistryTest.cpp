#include "gtest/gtest.h"

#include <chrono>
#include <future>
#include <memory>
#include <string>
#include <vector>

#include "ll/api/mod/Mod.h"
#include "ll/api/network/packet/Packet.h"
#include "ll/api/network/packet/PacketRegistrar.h"
#include "ll/api/protocol/Error.h"
#include "ll/api/protocol/Limits.h"
#include "ll/api/protocol/PayloadRegistry.h"
#include "ll/core/protocol/ModLifecycleIntegration.h"
#include "ll/core/protocol/PayloadRegistryInternal.h"
#include "ll/core/protocol/RegistrationLease.h"

namespace ll::protocol::test {

namespace {

class TestMod final : public mod::Mod {
public:
    explicit TestMod(std::string name, std::string protocolNamespace)
    : Mod(mod::Manifest{
          .entry             = "test.dll",
          .name              = std::move(name),
          .type              = "native",
          .protocolNamespace = std::move(protocolNamespace),
      }) {}

    void enable() { setState(State::Enabled); }
    void disable() { setState(State::Disabled); }
};

struct TestPayload {
    std::uint32_t value{};
};

struct OtherPayload {
    std::uint32_t value{};
};

struct TestCodec {
    std::shared_ptr<std::size_t> encodeCalls;

    Expected<> encode(Encoder& out, TestPayload const& value, SchemaVersion schema) const {
        if (schema != 1) {
            return makeCodecError(CodecErrc::UnsupportedSchema);
        }

        if (encodeCalls) ++*encodeCalls;

        return out.writeU32(value.value);
    }

    Expected<TestPayload> decode(Decoder& in, SchemaVersion schema) const {
        if (schema != 1) {
            return makeCodecError(CodecErrc::UnsupportedSchema);
        }

        auto value = in.readU32();
        if (!value) {
            return forwardError(value.error());
        }

        return TestPayload{*value};
    }
};

struct OtherCodec {
    Expected<> encode(Encoder& out, OtherPayload const& value, SchemaVersion) const {
        return out.writeU32(value.value);
    }

    Expected<OtherPayload> decode(Decoder& in, SchemaVersion) const {
        auto value = in.readU32();
        if (!value) {
            return forwardError(value.error());
        }
        return OtherPayload{*value};
    }
};

ModuleDefinition moduleDefinition(std::string_view name = "main") {
    return ModuleDefinition{
        .name             = *ModuleName::parse(name),
        .version          = {1, 2, 3},
        .protocolVersions = {1, 2},
        .requirement      = ModuleRequirement::Optional,
    };
}

PayloadDefinition payloadDefinition(std::string_view name = "message") {
    return PayloadDefinition{
        .name = *PayloadName::parse(name),
#if defined(LL_PLAT_C)
        .direction = PayloadDirection::ClientToServer,
#else
        .direction = PayloadDirection::ServerToClient,
#endif
        .requirement    = PayloadRequirement::Required,
        .schemas        = {1},
        .maxEncodedSize = 1024,
    };
}

RegistrationErrc registrationCode(Error& error) {
    EXPECT_TRUE(error.isA<RegistrationErrorInfo>());
    return error.as<RegistrationErrorInfo>().code;
}

} // namespace

TEST(ProtocolRegistryTest, KeepsDisabledOwnerPendingUntilActivation) {
    auto  owner    = std::make_shared<TestMod>("ProtocolRegistryPending", "registry_pending");
    auto& registry = PayloadRegistry::getInstance();
    auto  revision = registry.revision();

    auto module = registry.registerModule(moduleDefinition(), owner);
    ASSERT_TRUE(module);
    EXPECT_FALSE(module->active());
    EXPECT_EQ(registry.revision(), revision);

    auto payload = registry.registerPayload<TestPayload>(*module, payloadDefinition(), TestCodec{});
    ASSERT_TRUE(payload);
    EXPECT_FALSE(payload->active());
    EXPECT_EQ(registry.revision(), revision);
    EXPECT_EQ(registry.findModule(module->id()), nullptr);
    EXPECT_EQ(registry.findPayload(payload->id()), nullptr);

    owner->enable();
    ASSERT_TRUE(detail::PayloadRegistryAccess::activateOwner(registry, *owner));
    EXPECT_GT(registry.revision(), revision);
    EXPECT_TRUE(module->active());
    EXPECT_TRUE(payload->active());
    EXPECT_EQ(registry.findModule(module->id())->generation(), module->generation());
    EXPECT_EQ(registry.findPayload(payload->runtimeId())->id(), payload->id());

    EXPECT_TRUE(payload->reset());
    EXPECT_TRUE(module->reset());
}

TEST(ProtocolRegistryTest, RejectsDuplicateModulePayloadTypeAndInvalidDefinition) {
    auto owner = std::make_shared<TestMod>("ProtocolRegistryDuplicate", "registry_duplicate");
    owner->enable();
    auto& registry = PayloadRegistry::getInstance();

    auto module = registry.registerModule(moduleDefinition(), owner);
    ASSERT_TRUE(module);

    auto duplicateModule = registry.registerModule(moduleDefinition(), owner);
    ASSERT_FALSE(duplicateModule);
    EXPECT_EQ(registrationCode(duplicateModule.error()), RegistrationErrc::DuplicateModule);

    auto payload = registry.registerPayload<TestPayload>(*module, payloadDefinition(), TestCodec{});
    ASSERT_TRUE(payload);

    auto duplicatePayload = registry.registerPayload<OtherPayload>(*module, payloadDefinition(), OtherCodec{});
    ASSERT_FALSE(duplicatePayload);
    EXPECT_EQ(registrationCode(duplicatePayload.error()), RegistrationErrc::DuplicatePayload);

    auto duplicateType =
        registry.registerPayload<TestPayload>(*module, payloadDefinition("other_message"), TestCodec{});
    ASSERT_FALSE(duplicateType);
    EXPECT_EQ(registrationCode(duplicateType.error()), RegistrationErrc::DuplicateType);

    auto invalid    = payloadDefinition("invalid_schemas");
    invalid.schemas = {1, 1};

    auto duplicateSchema = registry.registerPayload<OtherPayload>(*module, std::move(invalid), OtherCodec{});
    ASSERT_FALSE(duplicateSchema);
    EXPECT_EQ(registrationCode(duplicateSchema.error()), RegistrationErrc::DuplicateSchema);

    auto moduleReset = module->reset();
    ASSERT_FALSE(moduleReset);
    EXPECT_EQ(registrationCode(moduleReset.error()), RegistrationErrc::PayloadsStillRegistered);
    EXPECT_TRUE(payload->reset());
    EXPECT_TRUE(module->reset());
}

TEST(ProtocolRegistryTest, PreservesRuntimeTombstoneAndAdvancesGeneration) {
    auto owner = std::make_shared<TestMod>("ProtocolRegistryReload", "registry_reload");
    owner->enable();
    auto& registry = PayloadRegistry::getInstance();

    auto module = registry.registerModule(moduleDefinition(), owner);
    ASSERT_TRUE(module);

    auto first = registry.registerPayload<TestPayload>(*module, payloadDefinition(), TestCodec{});
    ASSERT_TRUE(first);
    auto const runtimeId       = first->runtimeId();
    auto const firstGeneration = first->generation();
    EXPECT_TRUE(first->reset());
    EXPECT_TRUE(first->reset());
    EXPECT_NE(network::PacketRegistrar::getInstance().createPacket(runtimeId), nullptr);
    EXPECT_TRUE(network::PacketRegistrar::getInstance().getHandler(runtimeId));

    auto second = registry.registerPayload<TestPayload>(*module, payloadDefinition(), TestCodec{});
    ASSERT_TRUE(second);
    EXPECT_EQ(second->runtimeId(), runtimeId);
    EXPECT_GT(second->generation(), firstGeneration);

    EXPECT_TRUE(second->reset());
    EXPECT_TRUE(module->reset());
    EXPECT_TRUE(module->reset());
}

TEST(ProtocolRegistryTest, MovedFromRegistrationAccessorsAreNeutral) {
    auto owner = std::make_shared<TestMod>("ProtocolRegistryMoved", "registry_moved");
    owner->enable();
    auto& registry = PayloadRegistry::getInstance();

    auto module = registry.registerModule(moduleDefinition(), owner);
    ASSERT_TRUE(module);
    auto payload = registry.registerPayload<TestPayload>(*module, payloadDefinition(), TestCodec{});
    ASSERT_TRUE(payload);

    auto movedPayload = std::move(*payload);
    EXPECT_FALSE(*payload);
    EXPECT_EQ(&payload->id(), &PayloadId::INVALID());
    EXPECT_EQ(payload->runtimeId(), 0);
    EXPECT_EQ(payload->generation(), 0);

    EXPECT_TRUE(movedPayload.reset());
    auto movedModule = std::move(*module);
    EXPECT_FALSE(*module);
    EXPECT_EQ(&module->id(), &ModuleId::INVALID());
    EXPECT_EQ(module->generation(), 0);
    EXPECT_TRUE(movedModule.reset());
}

TEST(ProtocolRegistryTest, RejectsTombstoneDirectionChange) {
    auto owner = std::make_shared<TestMod>("ProtocolRegistryTombstone", "registry_tombstone");
    owner->enable();
    auto& registry = PayloadRegistry::getInstance();

    auto module = registry.registerModule(moduleDefinition(), owner);
    ASSERT_TRUE(module);

    auto first = registry.registerPayload<TestPayload>(*module, payloadDefinition(), TestCodec{});
    ASSERT_TRUE(first);
    ASSERT_TRUE(first->reset());

    auto incompatible = payloadDefinition();
#if defined(LL_PLAT_C)
    incompatible.direction = PayloadDirection::ServerToClient;
#else
    incompatible.direction = PayloadDirection::ClientToServer;
#endif
    auto second = registry.registerPayload<TestPayload>(*module, std::move(incompatible), TestCodec{});
    ASSERT_FALSE(second);
    EXPECT_EQ(registrationCode(second.error()), RegistrationErrc::TombstoneMismatch);

    EXPECT_TRUE(module->reset());
}

TEST(ProtocolRegistryTest, RejectsNamespaceOwnedByAnotherMod) {
    auto firstOwner  = std::make_shared<TestMod>("ProtocolRegistryNamespaceA", "registry_shared");
    auto secondOwner = std::make_shared<TestMod>("ProtocolRegistryNamespaceB", "registry_shared");

    firstOwner->enable();
    secondOwner->enable();
    auto& registry = PayloadRegistry::getInstance();

    auto first = registry.registerModule(moduleDefinition("first"), firstOwner);
    ASSERT_TRUE(first);

    auto second = registry.registerModule(moduleDefinition("second"), secondOwner);
    ASSERT_FALSE(second);
    EXPECT_EQ(registrationCode(second.error()), RegistrationErrc::NamespaceOwned);
    EXPECT_TRUE(first->reset());
}

TEST(ProtocolRegistryTest, RejectsNamespaceClaimByDifferentLiveIdentityWithSameName) {
    auto firstOwner  = std::make_shared<TestMod>("ProtocolRegistrySameName", "registry_same_name_identity");
    auto secondOwner = std::make_shared<TestMod>("ProtocolRegistrySameName", "registry_same_name_identity");

    firstOwner->enable();
    secondOwner->enable();
    auto& registry = PayloadRegistry::getInstance();

    auto first = registry.registerModule(moduleDefinition("first"), firstOwner);
    ASSERT_TRUE(first);

    auto second = registry.registerModule(moduleDefinition("second"), secondOwner);
    ASSERT_FALSE(second);
    EXPECT_EQ(registrationCode(second.error()), RegistrationErrc::NamespaceOwned);
    EXPECT_TRUE(first->reset());
}

TEST(ProtocolRegistryTest, PrepareModDisableDrainsOwnerBeforeModCallback) {
    auto owner = std::make_shared<TestMod>("ProtocolRegistryPrepareDisable", "registry_prepare_disable");
    owner->enable();
    auto& registry = PayloadRegistry::getInstance();

    auto module = registry.registerModule(moduleDefinition(), owner);
    ASSERT_TRUE(module);
    auto payload = registry.registerPayload<TestPayload>(*module, payloadDefinition(), TestCodec{});
    ASSERT_TRUE(payload);
    ASSERT_NE(registry.findPayload(payload->id()), nullptr);

    ASSERT_TRUE(prepareModDisable(*owner));
    EXPECT_EQ(registry.findPayload(payload->id()), nullptr);
    EXPECT_FALSE(payload->active());
    EXPECT_FALSE(module->active());
    EXPECT_TRUE(payload->reset());
    EXPECT_TRUE(module->reset());
}

TEST(ProtocolRegistryTest, ResetWaitsForAnExistingLeaseAndRevokesLookupFirst) {
    using namespace std::chrono_literals;

    auto owner = std::make_shared<TestMod>("ProtocolRegistryDrain", "registry_drain");
    owner->enable();

    auto& registry = PayloadRegistry::getInstance();
    auto  module   = registry.registerModule(moduleDefinition(), owner);
    ASSERT_TRUE(module);

    auto payload = registry.registerPayload<TestPayload>(*module, payloadDefinition(), TestCodec{});
    ASSERT_TRUE(payload);

    auto state = detail::PayloadRegistryAccess::findState(registry, payload->id());
    ASSERT_NE(state, nullptr);
    auto lease = detail::RegistrationLease::acquire(state, payload->generation());
    ASSERT_TRUE(lease);

    auto reset = std::async(std::launch::async, [&payload] { return payload->reset(); });
    EXPECT_EQ(reset.wait_for(50ms), std::future_status::timeout);
    EXPECT_EQ(registry.findPayload(state->descriptor()->id()), nullptr);

    lease->reset();
    EXPECT_EQ(reset.wait_for(1s), std::future_status::ready);
    EXPECT_TRUE(reset.get());
    EXPECT_TRUE(module->reset());
}

TEST(ProtocolRegistryTest, RejectsReregistrationUntilPreviousGenerationDrains) {
    auto owner = std::make_shared<TestMod>("ProtocolRegistryGenerationDrain", "registry_generation_drain");
    owner->enable();

    auto& registry = PayloadRegistry::getInstance();
    auto  module   = registry.registerModule(moduleDefinition(), owner);
    ASSERT_TRUE(module);

    auto payload = registry.registerPayload<TestPayload>(*module, payloadDefinition(), TestCodec{});
    ASSERT_TRUE(payload);

    auto state = detail::PayloadRegistryAccess::findState(registry, payload->id());
    ASSERT_NE(state, nullptr);
    auto lease = detail::RegistrationLease::acquire(state, payload->generation());
    ASSERT_TRUE(lease);

    *payload           = PayloadRegistration{};
    auto whileDraining = registry.registerPayload<TestPayload>(*module, payloadDefinition(), TestCodec{});
    ASSERT_FALSE(whileDraining);
    EXPECT_EQ(registrationCode(whileDraining.error()), RegistrationErrc::DuplicatePayload);

    lease->reset();
    auto replacement = registry.registerPayload<TestPayload>(*module, payloadDefinition(), TestCodec{});
    ASSERT_TRUE(replacement);

    EXPECT_TRUE(replacement->reset());
    EXPECT_TRUE(module->reset());
}

TEST(ProtocolRegistryTest, OwnerDrainWaitsForDetachedRegistrationLease) {
    using namespace std::chrono_literals;

    auto owner = std::make_shared<TestMod>("ProtocolRegistryDetachedDrain", "registry_detached_drain");
    owner->enable();

    auto& registry = PayloadRegistry::getInstance();
    auto  module   = registry.registerModule(moduleDefinition(), owner);
    ASSERT_TRUE(module);

    auto payload = registry.registerPayload<TestPayload>(*module, payloadDefinition(), TestCodec{});
    ASSERT_TRUE(payload);

    auto state = detail::PayloadRegistryAccess::findState(registry, payload->id());
    ASSERT_NE(state, nullptr);
    auto lease = detail::RegistrationLease::acquire(state, payload->generation());
    ASSERT_TRUE(lease);

    *payload   = PayloadRegistration{};
    auto drain = std::async(std::launch::async, [&registry, &owner] { return registry.drainOwner(*owner); });
    EXPECT_EQ(drain.wait_for(50ms), std::future_status::timeout);

    lease->reset();
    EXPECT_EQ(drain.wait_for(1s), std::future_status::ready);
    EXPECT_TRUE(drain.get());
    EXPECT_TRUE(module->reset());
}

TEST(ProtocolRegistryTest, SelfDrainFailsClosedWithoutDeadlock) {
    auto owner = std::make_shared<TestMod>("ProtocolRegistrySelfDrain", "registry_self_drain");
    owner->enable();

    auto& registry = PayloadRegistry::getInstance();
    auto  module   = registry.registerModule(moduleDefinition(), owner);
    ASSERT_TRUE(module);
    auto payload = registry.registerPayload<TestPayload>(*module, payloadDefinition(), TestCodec{});
    ASSERT_TRUE(payload);

    auto state = detail::PayloadRegistryAccess::findState(registry, payload->id());
    auto lease = detail::RegistrationLease::acquire(state, payload->generation());
    ASSERT_TRUE(lease);

    auto reset = payload->reset();
    ASSERT_FALSE(reset);
    ASSERT_TRUE(reset.error().isA<LifecycleErrorInfo>());
    EXPECT_EQ(reset.error().as<LifecycleErrorInfo>().code, LifecycleErrc::WouldDeadlock);
    EXPECT_EQ(registry.findPayload(payload->id()), nullptr);

    lease->reset();
    EXPECT_TRUE(payload->reset());
    EXPECT_TRUE(module->reset());
}

TEST(ProtocolRegistryTest, DrainOwnerRevokesAllOwnedDescriptors) {
    auto owner = std::make_shared<TestMod>("ProtocolRegistryOwnerDrain", "registry_owner_drain");
    owner->enable();

    auto& registry = PayloadRegistry::getInstance();
    auto  module   = registry.registerModule(moduleDefinition(), owner);
    ASSERT_TRUE(module);
    auto payload = registry.registerPayload<TestPayload>(*module, payloadDefinition(), TestCodec{});
    ASSERT_TRUE(payload);

    auto revision = registry.revision();
    ASSERT_TRUE(registry.drainOwner(*owner));
    EXPECT_GT(registry.revision(), revision);
    EXPECT_FALSE(module->active());
    EXPECT_FALSE(payload->active());
    EXPECT_EQ(registry.findModule(module->id()), nullptr);
    EXPECT_EQ(registry.findPayload(payload->id()), nullptr);

    EXPECT_TRUE(payload->reset());
    EXPECT_TRUE(module->reset());
}

TEST(ProtocolRegistryTest, DisabledOwnerCannotAcquireNewLease) {
    auto owner = std::make_shared<TestMod>("ProtocolRegistryDisabledSend", "registry_disabled_send");
    owner->enable();

    auto& registry = PayloadRegistry::getInstance();
    auto  module   = registry.registerModule(moduleDefinition(), owner);
    ASSERT_TRUE(module);
    auto payload = registry.registerPayload<TestPayload>(*module, payloadDefinition(), TestCodec{});
    ASSERT_TRUE(payload);

    auto state = detail::PayloadRegistryAccess::findState(registry, payload->id());
    ASSERT_NE(state, nullptr);

    owner->disable();
    auto lease = detail::RegistrationLease::acquire(state, payload->generation());
    ASSERT_FALSE(lease);
    ASSERT_TRUE(lease.error().isA<LifecycleErrorInfo>());
    EXPECT_EQ(lease.error().as<LifecycleErrorInfo>().code, LifecycleErrc::Draining);

    ASSERT_TRUE(registry.drainOwner(*owner));
    EXPECT_TRUE(payload->reset());
    EXPECT_TRUE(module->reset());
}

TEST(ProtocolRegistryTest, OwnerDrainRequiresExactOwnerIdentity) {
    auto owner    = std::make_shared<TestMod>("ProtocolRegistryIdentity", "registry_identity");
    auto impostor = std::make_shared<TestMod>("ProtocolRegistryIdentity", "registry_identity");
    owner->enable();
    impostor->enable();

    auto& registry = PayloadRegistry::getInstance();
    auto  module   = registry.registerModule(moduleDefinition(), owner);
    ASSERT_TRUE(module);
    auto payload = registry.registerPayload<TestPayload>(*module, payloadDefinition(), TestCodec{});
    ASSERT_TRUE(payload);

    ASSERT_TRUE(registry.drainOwner(*impostor));
    EXPECT_TRUE(module->active());
    EXPECT_TRUE(payload->active());
    EXPECT_NE(registry.findPayload(payload->id()), nullptr);

    ASSERT_TRUE(registry.drainOwner(*owner));
    EXPECT_TRUE(payload->reset());
    EXPECT_TRUE(module->reset());
}

TEST(ProtocolRegistryTest, OwnerDrainDestroysCallbacksBeforeReturning) {
    auto owner = std::make_shared<TestMod>("ProtocolRegistryCallbackDrain", "registry_callback_drain");
    owner->enable();

    auto& registry = PayloadRegistry::getInstance();
    auto  module   = registry.registerModule(moduleDefinition(), owner);
    ASSERT_TRUE(module);

    auto encodeCalls = std::make_shared<std::size_t>();
    auto payload     = registry.registerPayload<TestPayload>(*module, payloadDefinition(), TestCodec{encodeCalls});
    ASSERT_TRUE(payload);

    auto state = detail::PayloadRegistryAccess::findState(registry, payload->id());
    ASSERT_NE(state, nullptr);

    TestPayload value{42};
    ASSERT_TRUE(state->encode(&value, 1, 1024));
    EXPECT_EQ(*encodeCalls, 1);

    ASSERT_TRUE(registry.drainOwner(*owner));
    auto afterDrain = state->encode(&value, 1, 1024);
    ASSERT_FALSE(afterDrain);
    ASSERT_TRUE(afterDrain.error().isA<LifecycleErrorInfo>());
    EXPECT_EQ(afterDrain.error().as<LifecycleErrorInfo>().code, LifecycleErrc::Draining);
    EXPECT_EQ(*encodeCalls, 1);

    EXPECT_TRUE(payload->reset());
    EXPECT_TRUE(module->reset());
}

TEST(ProtocolRegistryTest, RejectsModulesBeyondDeclarationLimit) {
    auto owner = std::make_shared<TestMod>("ProtocolRegistryModuleLimit", "registry_module_limit");
    owner->enable();

    auto&                           registry = PayloadRegistry::getInstance();
    std::vector<ModuleRegistration> modules;
    modules.reserve(Limits::MaxDeclaredModules);

    for (std::size_t index = 0; index < Limits::MaxDeclaredModules; ++index) {
        auto module = registry.registerModule(moduleDefinition("module_" + std::to_string(index)), owner);
        ASSERT_TRUE(module) << index;
        modules.emplace_back(std::move(*module));
    }

    auto overflow = registry.registerModule(moduleDefinition("overflow"), owner);
    ASSERT_FALSE(overflow);
    EXPECT_EQ(registrationCode(overflow.error()), RegistrationErrc::InvalidLimit);

    for (auto& module : modules) {
        EXPECT_TRUE(module.reset());
    }
}

} // namespace ll::protocol::test
