#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/ThreadOwner.h"
#include "mc/world/actor/player/TrustedSkinFlag.h"
#include "mc/world/actor/player/persona/AnimatedTextureType.h"
#include "mc/world/actor/player/persona/ArmSize.h"
#include "mc/world/actor/player/persona/PieceType.h"

// auto generated forward declare list
// clang-format off
class AnimatedImageData;
class BinaryStream;
class ConnectionRequest;
class LevelData;
class MinEngineVersion;
class ReadOnlyBinaryStream;
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
    // member functions
    // NOLINTBEGIN
    MCAPI SerializedSkinRef();

    MCAPI SerializedSkinRef(::SerializedSkinRef&& rhs);

    MCAPI SerializedSkinRef(::SerializedSkinRef const& rhs);

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

    MCAPI ::std::vector<::AnimatedImageData> const& getAnimatedImageData() const;

    MCAPI ::std::string const& getAnimationData() const;

#ifdef LL_PLAT_C
    MCAPI float getAnimationFrames(::persona::AnimatedTextureType animationType) const;
#endif

    MCAPI ::persona::ArmSize::Type const& getArmSize() const;

#ifdef LL_PLAT_C
    MCAPI ::std::string getArmSizeAsString() const;
#endif

    MCAPI ::std::string const& getCapeId() const;

    MCFOLD ::mce::Image const& getCapeImageData() const;

#ifdef LL_PLAT_C
    MCFOLD ::mce::Image& getCapeImageData();
#endif

    MCFOLD ::SkinImage const& getCapeImageDataCereal() const;

#ifdef LL_PLAT_C
    MCFOLD ::std::string const& getDefaultGeometryName() const;
#endif

    MCFOLD ::std::string const& getFullId() const;

    MCAPI ::Json::Value const& getGeometryData() const;

    MCAPI ::MinEngineVersion const& getGeometryDataMinEngineVersion() const;

#ifdef LL_PLAT_C
    MCAPI ::Json::Value& getGeometryDataMutable() const;
#endif

    MCAPI ::std::string getGeometryDataStr() const;

    MCFOLD ::std::string const& getId() const;

#ifdef LL_PLAT_C
    MCFOLD ::mce::Image const& getImageData() const;

    MCFOLD ::mce::Image& getImageData();
#endif

    MCFOLD ::SkinImage const& getImageDataCereal() const;

#ifdef LL_PLAT_C
    MCFOLD ::mce::Image& getImageDataMutable();
#endif

    MCAPI bool getIsPersona() const;

    MCAPI bool getIsPersonaCapeOnClassicSkin() const;

    MCAPI bool getIsPremium() const;

    MCAPI ::TrustedSkinFlag const& getIsTrustedSkinFlag() const;

    MCFOLD ::std::string const& getName() const;

    MCAPI ::std::vector<::SerializedPersonaPieceHandle> const& getPersonaPieces() const;

    MCAPI ::std::unordered_map<::persona::PieceType, ::TintMapColor> const& getPieceTintColors() const;

    MCFOLD ::std::string const& getPlayFabId() const;

    MCFOLD ::std::string const& getResourcePatch() const;

    MCAPI ::mce::Color const& getSkinColor() const;

    MCAPI bool isPrimaryUser() const;

    MCAPI bool isTrustedSkin() const;

    MCAPI bool isValid() const;

    MCFOLD ::SerializedSkinRef& operator=(::SerializedSkinRef&& rhs);

    MCFOLD ::SerializedSkinRef& operator=(::SerializedSkinRef const& rhs);

    MCAPI bool operator==(::SerializedSkinRef const& rhs) const;

    MCAPI bool overridesPlayerAppearance() const;

    MCAPI ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);

#ifdef LL_PLAT_C
    MCAPI void releaseThread();
#endif

    MCAPI void setAnimatedImageData(::std::vector<::AnimatedImageData> const& animatedImages);

    MCAPI void setAnimationData(::std::string const& animationData);

    MCAPI void setArmSize(::persona::ArmSize::Type const& armSizeType);

    MCAPI void setCapeId(::std::string const& capeId);

#ifdef LL_PLAT_C
    MCAPI void setCapeImageData(::mce::Image const* image);
#endif

    MCAPI void setCapeImageDataCereal(::SkinImage const& image);

    MCAPI void setFullId(::std::string const& fullId);

#ifdef LL_PLAT_C
    MCAPI void setGeometryData(::Json::Value data, ::MinEngineVersion minEngineVersion);
#endif

    MCAPI void setGeometryDataCereal(::Json::Value data);

    MCAPI void setGeometryDataMinEngineVersion(::MinEngineVersion minEngineVersion);

    MCAPI void setId(::std::string const& id);

#ifdef LL_PLAT_C
    MCAPI void setImageData(::mce::Image const* image);
#endif

    MCAPI void setImageDataCereal(::SkinImage const& image);

    MCAPI void setIsPersona(bool isPersona);

    MCAPI void setIsPersonaCapeOnClassicSkin(bool isPersonaCapeOnClassicSkin);

    MCAPI void setIsPremium(bool isPremium);

    MCAPI void setIsPrimaryUser(bool isPrimaryUser);

    MCAPI void setIsTrustedSkin(bool isTrustedSkin);

    MCAPI void setIsTrustedSkinFlag(::TrustedSkinFlag const& isTrustedSkinFlag);

    MCAPI void setOverridesPlayerAppearance(bool overridesPlayerAppearance);

    MCAPI void setPersonaAppearanceData(
        ::persona::ArmSize::Type const&                                   armSizeType,
        ::mce::Color const&                                               skinColor,
        ::std::vector<::SerializedPersonaPieceHandle>                     personaPieces,
        ::std::unordered_map<::persona::PieceType, ::TintMapColor> const& pieceTintColors
    );

    MCAPI void setPersonaPieces(::std::vector<::SerializedPersonaPieceHandle> const& personaPieces);

    MCAPI void setPieceTintColors(::std::unordered_map<::persona::PieceType, ::TintMapColor> const& pieceTintColors);

    MCAPI void setPlayFabId(::std::string const& playFabId);

    MCAPI void setResourcePatch(::std::string const& resourcePatch);

    MCAPI void setSkinColor(::mce::Color const& color);

#ifdef LL_PLAT_C
    MCAPI void updateGeometryName();

    MCAPI bool useBlinkingAnimation() const;
#endif

    MCFOLD void verifyTrustEstablished(::std::string_view functionName) const;

    MCAPI void write(::BinaryStream& stream) const;

    MCAPI ~SerializedSkinRef();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SerializedSkinRef createTrustedDefaultSerializedSkin();

    MCAPI static bool isSkinDisabled(::SerializedSkinRef const& skin, ::LevelData const& levelData);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCFOLD void* $ctor(::SerializedSkinRef&& rhs);

    MCFOLD void* $ctor(::SerializedSkinRef const& rhs);

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
