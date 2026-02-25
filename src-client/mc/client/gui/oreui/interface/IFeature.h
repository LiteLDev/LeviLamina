#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

namespace OreUI {

class IFeature {
public:
    // IFeature inner types define
    using OnEnabledChangedCallback = ::std::function<void(bool)>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IFeature() = default;

    virtual bool isEnabled() const = 0;

    virtual void registerIsEnabledChangedCallback(::Bedrock::PubSub::Subscription&, ::std::function<void(bool)>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
