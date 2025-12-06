#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/puv/LoadResult.h"
#include "mc/resources/JsonBetaState.h"
#include "mc/world/item/components/CerealComponentItemDataLoader.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
struct BetaItemComponentData;
struct ComponentItemDataAll_Latest;
struct ComponentItemData_Legacy;
struct ComponentItemData_v1_21_110;
struct IPackLoadContext;
struct LegacyEventItemComponentData;
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ComponentItemDataLoader {
public:
    // ComponentItemDataLoader inner types define
    using Validator = ::std::function<void(::Puv::LoadResult<::ComponentItemDataAll_Latest>&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::cereal::ReflectionCtx const>> mCtx;
    ::ll::TypedStorage<8, 216, ::CerealComponentItemDataLoader>                             mLoader;
    ::ll::TypedStorage<8, 8, ::IPackLoadContext&>                                           mPackLoadContext;
    ::ll::TypedStorage<1, 1, bool>                                                          mIsServer;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Puv::LoadResult<::ComponentItemDataAll_Latest>&)>> mValidatorFn;
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

    MCAPI ::Puv::LoadResult<::ComponentItemData_v1_21_110> _parseCereal(::Json::Value const& input) const;

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
