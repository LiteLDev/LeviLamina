#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Identifier.h"
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_50 {

struct CameraAimAssistPresetDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::Identifier<5>>                                  mIdentifier;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Reference<18446744073709551615>>> mExclusionList;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Reference<10>>>                   mLiquidTargetingList;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::SharedTypes::Reference<10>, ::SharedTypes::Reference<6>>>
                                                                            mItemSettings;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::Reference<6>>> mDefaultItemSettings;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::Reference<6>>> mHandSettings;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CameraAimAssistPresetDefinition();

    MCAPI CameraAimAssistPresetDefinition(::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition&&);

    MCAPI CameraAimAssistPresetDefinition(::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition const&);

    MCAPI ::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition&
    operator=(::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition&&);

    MCAPI ::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition&
    operator=(::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition const&);

    MCAPI bool operator==(::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition const&) const;

    MCAPI void write(::BinaryStream& stream) const;

    MCAPI ~CameraAimAssistPresetDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static ::Bedrock::Result<::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition>
    read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition&&);

    MCAPI void* $ctor(::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
