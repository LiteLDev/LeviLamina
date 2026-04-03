#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class FeatureToggles;
class IAdvancedGraphicsOptions;
class IDataDrivenUIRepository;
class IMinecraftGame;
struct FlightingService;
namespace Parties { struct PartySystem; }
namespace flighting { struct TreatmentToggles; }
// clang-format on

namespace OreUI {

class GameDependencies {
public:
    // GameDependencies inner types define
    using GamePtr = ::Bedrock::NotNullNonOwnerPtr<::IMinecraftGame>;

    using GraphicsPtr = ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions>;

    using PlatformPtr = ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>;

    using FeaturePtr = ::Bedrock::NotNullNonOwnerPtr<::FeatureToggles>;

    using DataDrivenUIRepositoryPtr = ::Bedrock::NotNullNonOwnerPtr<::IDataDrivenUIRepository>;

    using PartySystem = ::Bedrock::NonOwnerPointer<::Parties::PartySystem>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IMinecraftGame>>           mGame;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions>> mGraphicsOptions;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>>              mPlatform;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::flighting::TreatmentToggles>>    mFlighting;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::FeatureToggles>>           mFeatureToggles;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IDataDrivenUIRepository>>  mDataDrivenUIRepository;
    // NOLINTEND

public:
    // prevent constructor by default
    GameDependencies& operator=(GameDependencies const&);
    GameDependencies();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameDependencies(::OreUI::GameDependencies const&);

    MCAPI GameDependencies(::OreUI::GameDependencies&&);

    MCAPI ::FlightingService& getFlightingService() const;

    MCAPI ~GameDependencies();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const&);

    MCAPI void* $ctor(::OreUI::GameDependencies&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
