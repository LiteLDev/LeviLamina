#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/ServiceReference.h"

// auto generated forward declare list
// clang-format off
class FeatureToggles;
class I18n;
class IMinecraftEventing;
class ThrottledFileWriteManager;
namespace flighting { class IFlightReader; }
// clang-format on

namespace AppPlatformImpl {

class IDependencies {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IDependencies() = default;

    // vIndex: 1
    virtual ::ServiceReference<::IMinecraftEventing> getEventing() = 0;

    // vIndex: 2
    virtual ::ServiceReference<::FeatureToggles> getFeatureToggles() = 0;

    // vIndex: 3
    virtual ::Bedrock::NonOwnerPointer<::ThrottledFileWriteManager> getFileWriteManager() = 0;

    // vIndex: 4
    virtual ::ServiceReference<::flighting::IFlightReader> getTreatmentToggles() = 0;

    // vIndex: 5
    virtual ::I18n& getI18n() = 0;

    // vIndex: 6
    virtual bool& getUseSuspendHandler() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
