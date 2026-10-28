#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_21_40/clientbiome/components/ClientBiomeComponentVersion.h"
#include "mc/deps/shared_types/v1_21_40/clientbiome/components/IClientBiomeJsonComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_120 {

struct AmbientSoundsClientBiomeJsonComponent : public ::SharedTypes::v1_21_40::IClientBiomeJsonComponent {
public:
    // AmbientSoundsClientBiomeJsonComponent inner types declare
    // clang-format off
    struct SoundAddition;
    // clang-format on

    // AmbientSoundsClientBiomeJsonComponent inner types define
    struct SoundAddition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<20>> mAsset;
        ::ll::TypedStorage<4, 4, float>                         mChance;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI ~SoundAddition();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCFOLD void $dtor();
#endif
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent::SoundAddition> mAddition;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<20>>                                                   mLoop;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<20>>                                                   mMood;
    ::ll::TypedStorage<8, 40, ::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent::SoundAddition>
                                                            mUnderwaterAddition;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<20>> mUnderwaterLoop;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<20>> mUnderwaterMood;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    AmbientSoundsClientBiomeJsonComponent& operator=(AmbientSoundsClientBiomeJsonComponent const&);
    AmbientSoundsClientBiomeJsonComponent();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ClientBiomeComponentVersion getType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI AmbientSoundsClientBiomeJsonComponent(::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent const&);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI static ::std::add_lvalue_reference_t<char const[25]> SCHEMA_NAME();
#endif

#ifdef LL_PLAT_C
    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::SharedTypes::v1_21_120::AmbientSoundsClientBiomeJsonComponent const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::ClientBiomeComponentVersion $getType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
