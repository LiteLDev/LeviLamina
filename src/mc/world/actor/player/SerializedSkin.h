#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ThreadOwner.h"
#include "mc/world/actor/player/persona/ArmSize.h"
#include "mc/world/actor/player/persona/PieceType.h"

// auto generated forward declare list
// clang-format off
class MinEngineVersion;
class SerializedPersonaPieceHandle;
class SerializedSkinImpl;
class TintMapColor;
namespace Json { class Value; }
namespace mce { class Color; }
namespace mce { struct Image; }
// clang-format on

class SerializedSkin {
public:
    // SerializedSkin inner types define
    using SerializedSkinWrapper = ::Bedrock::Application::ThreadOwner<::SerializedSkinImpl, 0>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::Application::ThreadOwner<::SerializedSkinImpl, 0>>>
        mSkinImpl;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializedSkin(SerializedSkin const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SerializedSkin();

    MCAPI SerializedSkin(
        ::std::string const&      name,
        ::std::string const&      playFabId,
        ::std::string const&      resourcePatch,
        ::mce::Image const&       skinImage,
        ushort const&             skinImageWidth,
        ushort const&             skinImageHeight,
        ::mce::Image const&       capeImage,
        ushort const&             capeImageWidth,
        ushort const&             capeImageHeight,
        ::Json::Value&&           geometryData,
        ::MinEngineVersion const& geometryDataMinEngineVersion,
        ::std::string const&      animationData,
        ::std::string const&      capeId,
        bool                      isTrustedSkin,
        bool                      isPremium,
        bool                      isPersona,
        bool                      isPersonaCapeOnClassicSkin,
        bool                      isPrimaryUser,
        bool                      overridesPlayerAppearance
    );

    MCAPI_C bool isValid() const;

    MCFOLD ::SerializedSkin& operator=(::SerializedSkin&&);

    MCFOLD ::SerializedSkin& operator=(::SerializedSkin const&);

    MCAPI_C void setGeometryData(::Json::Value data, ::MinEngineVersion minEngineVersion);

    MCAPI void setPersonaAppearanceData(
        ::persona::ArmSize::Type const&                                   armSizeType,
        ::mce::Color const&                                               skinColor,
        ::std::vector<::SerializedPersonaPieceHandle>                     personaPieces,
        ::std::unordered_map<::persona::PieceType, ::TintMapColor> const& pieceTintColors
    );

    MCAPI ~SerializedSkin();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(
        ::std::string const&      name,
        ::std::string const&      playFabId,
        ::std::string const&      resourcePatch,
        ::mce::Image const&       skinImage,
        ushort const&             skinImageWidth,
        ushort const&             skinImageHeight,
        ::mce::Image const&       capeImage,
        ushort const&             capeImageWidth,
        ushort const&             capeImageHeight,
        ::Json::Value&&           geometryData,
        ::MinEngineVersion const& geometryDataMinEngineVersion,
        ::std::string const&      animationData,
        ::std::string const&      capeId,
        bool                      isTrustedSkin,
        bool                      isPremium,
        bool                      isPersona,
        bool                      isPersonaCapeOnClassicSkin,
        bool                      isPrimaryUser,
        bool                      overridesPlayerAppearance
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
