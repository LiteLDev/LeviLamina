#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class ServerTextSettings : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    ServerTextSettings& operator=(ServerTextSettings const&);
    ServerTextSettings(ServerTextSettings const&);
    ServerTextSettings();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerTextSettings() = default;

    MCAPI explicit ServerTextSettings(std::bitset<3> const& settings);

    MCAPI std::bitset<3> const& getEnabledServerTextEvents() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
