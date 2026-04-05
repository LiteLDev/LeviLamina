#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ThreadOwner.h"
#include "mc/world/actor/player/persona/AnimatedTextureType.h"
#include "mc/world/actor/player/persona/ArmSize.h"
#include "mc/world/actor/player/persona/PieceType.h"

// auto generated forward declare list
// clang-format off
class MinEngineVersion;
class SerializedPersonaPieceHandle;
class SerializedSkinImpl;
class TintMapColor;
struct SkinImage;
namespace Json { class Value; }
namespace mce { class Color; }
namespace mce { struct Image; }
// clang-format on

class SerializedSkinRef {
public:
    // SerializedSkinRef inner types define
    using SerializedSkinWrapper = ::Bedrock::Application::ThreadOwner<::SerializedSkinImpl, 0>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::Application::ThreadOwner<::SerializedSkinImpl, 0>>>
        mSkinImpl;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializedSkinRef(SerializedSkinRef const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SerializedSkinRef();

    MCAPI SerializedSkinRef(
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

    MCAPI float getAnimationFrames(::persona::AnimatedTextureType animationType) const;

#ifdef LL_PLAT_C
    MCAPI bool isValid() const;
#endif

    MCFOLD ::SerializedSkinRef& operator=(::SerializedSkinRef&&);

    MCFOLD ::SerializedSkinRef& operator=(::SerializedSkinRef const&);

#ifdef LL_PLAT_C
    MCAPI void setCapeImageData(::mce::Image const* image);
#endif

    MCAPI void setCapeImageDataCereal(::SkinImage const& image);

#ifdef LL_PLAT_C
    MCAPI void setGeometryData(::Json::Value data, ::MinEngineVersion minEngineVersion);
#endif

    MCAPI void setGeometryDataCereal(::Json::Value data);

    MCAPI void setGeometryDataMinEngineVersion(::MinEngineVersion minEngineVersion);

#ifdef LL_PLAT_C
    MCAPI void setImageData(::mce::Image const* image);
#endif

    MCAPI void setImageDataCereal(::SkinImage const& image);

    MCAPI void setPersonaAppearanceData(
        ::persona::ArmSize::Type const&                                   armSizeType,
        ::mce::Color const&                                               skinColor,
        ::std::vector<::SerializedPersonaPieceHandle>                     personaPieces,
        ::std::unordered_map<::persona::PieceType, ::TintMapColor> const& pieceTintColors
    );

    MCAPI ~SerializedSkinRef();
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
