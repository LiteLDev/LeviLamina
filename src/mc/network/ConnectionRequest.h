#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/world/actor/player/persona/PieceType.h"

// auto generated forward declare list
// clang-format off
class AnimatedImageData;
class GameServerToken;
class MinEngineVersion;
class SerializedPersonaPieceHandle;
class TintMapColor;
class UnverifiedCertificate;
class WebToken;
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ConnectionRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::WebToken>>              mRawToken;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::UnverifiedCertificate>> mCertificateData;
    ::ll::TypedStorage<8, 8, ::GameServerToken>                          mGameServerToken;
    ::ll::TypedStorage<1, 1, ::SubClientId>                              mClientSubId;
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectionRequest& operator=(ConnectionRequest const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ConnectionRequest(::ConnectionRequest const& other);

    MCAPI ConnectionRequest(::std::unique_ptr<::WebToken> rawToken, ::std::string const& certificateString);

    MCFOLD ::std::vector<::AnimatedImageData> getAnimatedImageData() const;

    MCFOLD ::std::string getArmSize() const;

    MCFOLD ::std::vector<uchar> getCapeData() const;

    MCFOLD ::std::string getCapeId() const;

    MCFOLD ::std::string getClientPlatformId() const;

    MCFOLD ::std::string getClientPlatformOfflineId() const;

    MCFOLD ::std::string getClientPlatformOnlineId() const;

    MCFOLD uint64 getClientRandomId() const;

    MCFOLD ::std::string getClientThirdPartyName() const;

    MCFOLD ::Json::Value getData(::std::string const& key) const;

    MCFOLD ::std::string getDeviceId() const;

    MCAPI ::std::string getEduTokenChain() const;

    MCFOLD ::std::vector<::SerializedPersonaPieceHandle> getPersonaPieces() const;

    MCFOLD ::std::unordered_map<::persona::PieceType, ::TintMapColor> getPieceTintColors() const;

    MCFOLD ::std::string getPlayFabIdUnverified() const;

    MCFOLD ::std::string getSelfSignedId() const;

    MCFOLD ::std::string getSkinAnimationData() const;

    MCFOLD ::mce::Color getSkinColor() const;

    MCFOLD ::std::vector<uchar> getSkinData() const;

    MCAPI ::std::string getSkinGeometry() const;

    MCFOLD ::MinEngineVersion getSkinGeometryMinEngineVersion() const;

    MCFOLD ::std::string getSkinId() const;

    MCAPI ushort getSkinImageHeight() const;

    MCAPI ushort getSkinImageWidth() const;

    MCAPI ::std::string getSkinResourcePatch() const;

    MCFOLD bool isPersonaSkin() const;

    MCFOLD ::std::string toString();

    MCAPI bool verify(::std::vector<::std::string> const& trustedKeys, int64 currentTime, bool checkExpired);

    MCFOLD bool verifySelfSigned(bool checkExpired);

    MCAPI ~ConnectionRequest();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ConnectionRequest fromString(::std::string const& str);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ConnectionRequest const& other);

    MCAPI void* $ctor(::std::unique_ptr<::WebToken> rawToken, ::std::string const& certificateString);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
