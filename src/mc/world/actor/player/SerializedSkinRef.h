#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/persona/ArmSizeType.h"
#include "mc/deps/shared_types/persona/PieceType.h"
#include "mc/util/ThreadOwner.h"
#include "mc/world/actor/player/TrustedSkinFlag.h"

// auto generated forward declare list
// clang-format off
class AnimatedImageData;
class ConnectionRequest;
class MinEngineVersion;
class SerializedPersonaPieceHandle;
class SerializedSkinImpl;
class SubClientConnectionRequest;
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

    MCAPI SerializedSkinRef(::std::string const& playFabId, ::ConnectionRequest const& connectionRequest);

    MCAPI SerializedSkinRef(::std::string const& playFabId, ::SubClientConnectionRequest const& request);

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

#ifdef LL_PLAT_C
    MCAPI int64 estimateSizeInBytes() const;
#endif

    MCAPI bool isValid() const;

    MCFOLD ::SerializedSkinRef& operator=(::SerializedSkinRef&& rhs);

    MCAPI ::SerializedSkinRef& operator=(::SerializedSkinRef const& rhs);

    MCAPI void setAnimatedImageData(::std::vector<::AnimatedImageData> animatedImages);

    MCAPI void setAnimationData(::std::string const& animationData);

    MCAPI void setArmSize(::SharedTypes::persona::ArmSizeType const& armSizeType);

    MCAPI void setCapeId(::std::string const& capeId);

    MCAPI void setCapeImageDataCereal(::SkinImage const& image);

    MCAPI void setFullId(::std::string const& fullId);

#ifdef LL_PLAT_C
    MCAPI void setGeometryData(::Json::Value data, ::MinEngineVersion minEngineVersion);
#endif

    MCAPI void setGeometryDataMinEngineVersion(::MinEngineVersion minEngineVersion);

    MCAPI void setId(::std::string const& id);

    MCAPI void setImageDataCereal(::SkinImage const& image);

    MCAPI void setIsTrustedSkinFlag(::TrustedSkinFlag const& isTrustedSkinFlag);

    MCAPI void setPersonaAppearanceData(
        ::SharedTypes::persona::ArmSizeType const&                                     armSizeType,
        ::mce::Color const&                                                            skinColor,
        ::std::vector<::SerializedPersonaPieceHandle>                                  personaPieces,
        ::std::unordered_map<::SharedTypes::persona::PieceType, ::TintMapColor> const& pieceTintColors
    );

    MCAPI void setPersonaPieces(::std::vector<::SerializedPersonaPieceHandle> const& personaPieces);

    MCAPI void
    setPieceTintColors(::std::unordered_map<::SharedTypes::persona::PieceType, ::TintMapColor> const& pieceTintColors);

    MCAPI void setPlayFabId(::std::string const& playFabId);

    MCAPI void setProfileHash(::std::string const& profileHash);

    MCAPI void setResourcePatch(::std::string const& resourcePatch);

    MCAPI void setSkinColor(::mce::Color const& color);

    MCAPI ~SerializedSkinRef();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SerializedSkinRef createTrustedDefaultSerializedSkin();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::std::string const& playFabId, ::ConnectionRequest const& connectionRequest);

    MCAPI void* $ctor(::std::string const& playFabId, ::SubClientConnectionRequest const& request);

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
