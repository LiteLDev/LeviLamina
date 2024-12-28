#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"
#include "mc/resources/JsonBetaState.h"

// auto generated forward declare list
// clang-format off
class IPackLoadContext;
class SemVersion;
struct BetaItemComponentData;
struct ComponentItemDataAll_Latest;
struct ComponentItemData_Legacy;
struct ComponentItemData_v1_21_50;
struct LegacyEventItemComponentData;
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ComponentItemDataLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnkffd516;
    ::ll::UntypedStorage<8, 224> mUnk281520;
    ::ll::UntypedStorage<8, 8>   mUnk64a026;
    ::ll::UntypedStorage<1, 1>   mUnk87b58c;
    ::ll::UntypedStorage<8, 64>  mUnk58eec3;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemDataLoader& operator=(ComponentItemDataLoader const&);
    ComponentItemDataLoader(ComponentItemDataLoader const&);
    ComponentItemDataLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemDataLoader(
        ::SemVersion const&                                                      documentVersion,
        ::IPackLoadContext&                                                      packLoadContext,
        bool                                                                     isServer,
        ::cereal::ReflectionCtx const&                                           ctx,
        ::std::function<void(::Puv::LoadResult<::ComponentItemDataAll_Latest>&)> validatorFn
    );

    MCAPI ::Puv::LoadResult<::BetaItemComponentData>
    _parseBeta(::Json::Value const& input, ::JsonBetaState canUseBeta) const;

    MCAPI ::Puv::LoadResult<::ComponentItemData_v1_21_50> _parseCereal(::Json::Value const& input) const;

    MCAPI ::std::optional<::LegacyEventItemComponentData> _parseEvents(::Json::Value const& input) const;

    MCAPI ::std::pair<::ComponentItemData_Legacy, bool> _parseLegacyComponents(::Json::Value input) const;

    MCAPI ::Puv::LoadResult<::ComponentItemDataAll_Latest>
    load(::Json::Value const& input, ::JsonBetaState canUseBeta) const;

    MCAPI ~ComponentItemDataLoader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::SemVersion const&                                                      documentVersion,
        ::IPackLoadContext&                                                      packLoadContext,
        bool                                                                     isServer,
        ::cereal::ReflectionCtx const&                                           ctx,
        ::std::function<void(::Puv::LoadResult<::ComponentItemDataAll_Latest>&)> validatorFn
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
