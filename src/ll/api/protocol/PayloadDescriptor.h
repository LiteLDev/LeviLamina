#pragma once

#include <cstdint>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

#include "ll/api/protocol/Direction.h"
#include "ll/api/protocol/Id.h"
#include "ll/api/protocol/Limits.h"
#include "ll/api/protocol/Version.h"

namespace ll::protocol {

struct PayloadDefinition {
    PayloadName                name;
    PayloadDirection           direction;
    PayloadRequirement         requirement{PayloadRequirement::Required};
    std::vector<SchemaVersion> schemas{1};
    std::uint32_t              maxEncodedSize{Limits::DefaultPayloadBody};
};

class PayloadDescriptor {
    PayloadId         mId;
    ModuleId          mModuleId;
    PayloadDefinition mDefinition;
    std::string       mOwner;
    std::uint64_t     mRuntimeId{};
    std::uint64_t     mGeneration{};

public:
    PayloadDescriptor(
        PayloadId         id,
        ModuleId          moduleId,
        PayloadDefinition definition,
        std::string       owner,
        std::uint64_t     runtimeId,
        std::uint64_t     generation
    )
    : mId(std::move(id)),
      mModuleId(std::move(moduleId)),
      mDefinition(std::move(definition)),
      mOwner(std::move(owner)),
      mRuntimeId(runtimeId),
      mGeneration(generation) {}

    [[nodiscard]] PayloadId const&         id() const noexcept { return mId; }
    [[nodiscard]] ModuleId const&          moduleId() const noexcept { return mModuleId; }
    [[nodiscard]] PayloadDefinition const& definition() const noexcept { return mDefinition; }
    [[nodiscard]] std::string_view         owner() const noexcept { return mOwner; }
    [[nodiscard]] std::uint64_t            runtimeId() const noexcept { return mRuntimeId; }
    [[nodiscard]] std::uint64_t            generation() const noexcept { return mGeneration; }
};

} // namespace ll::protocol
