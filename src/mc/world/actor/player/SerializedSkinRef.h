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

    MCNAPI explicit SerializedSkinRef(::ConnectionRequest const& connectionRequest);

    MCNAPI explicit SerializedSkinRef(::SubClientConnectionRequest const& request);

    MCNAPI SerializedSkinRef(
        ::std::string const&      name,
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
    MCNAPI int64 estimateSizeInBytes() const;
#endif

    MCAPI bool isValid() const;

    MCFOLD ::SerializedSkinRef& operator=(::SerializedSkinRef&& rhs);

    MCAPI ::SerializedSkinRef& operator=(::SerializedSkinRef const& rhs);

    MCNAPI void setAnimatedImageData(::std::vector<::AnimatedImageData> animatedImages);

    MCNAPI void setAnimationData(::std::string const& animationData);

    MCNAPI void setArmSize(::SharedTypes::persona::ArmSizeType const& armSizeType);

    MCNAPI void setCapeId(::std::string const& capeId);

    MCNAPI void setCapeImageDataCereal(::SkinImage const& image);

    MCNAPI void setFullId(::std::string const& fullId);

#ifdef LL_PLAT_C
    MCNAPI void setGeometryData(::Json::Value data, ::MinEngineVersion minEngineVersion);
#endif

    MCNAPI void setGeometryDataMinEngineVersion(::MinEngineVersion minEngineVersion);

    MCNAPI void setId(::std::string const& id);

    MCNAPI void setImageDataCereal(::SkinImage const& image);

    MCNAPI void setIsTrustedSkinFlag(::TrustedSkinFlag const& isTrustedSkinFlag);

    MCNAPI void setPersonaAppearanceData(
        ::SharedTypes::persona::ArmSizeType const&                                     armSizeType,
        ::mce::Color const&                                                            skinColor,
        ::std::vector<::SerializedPersonaPieceHandle>                                  personaPieces,
        ::std::unordered_map<::SharedTypes::persona::PieceType, ::TintMapColor> const& pieceTintColors
    );

    MCNAPI void setPersonaPieces(::std::vector<::SerializedPersonaPieceHandle> const& personaPieces);

    MCNAPI void
    setPieceTintColors(::std::unordered_map<::SharedTypes::persona::PieceType, ::TintMapColor> const& pieceTintColors);

    MCNAPI void setProfileHash(::std::string const& profileHash);

    MCNAPI void setSkinColor(::mce::Color const& color);

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

    MCNAPI void* $ctor(::ConnectionRequest const& connectionRequest);

    MCNAPI void* $ctor(::SubClientConnectionRequest const& request);

    MCNAPI void* $ctor(
        ::std::string const&      name,
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
