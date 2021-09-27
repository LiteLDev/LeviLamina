#include "Certificate.h"
#include "WebToken.h"

#include "UnverifiedCertificate.h"

class ConnectionRequest {
public:
    std::unique_ptr<UnverifiedCertificate> certificateData;
    std::unique_ptr<Certificate>           certificate;
    std::unique_ptr<WebToken>              rawToken;
    uint8_t                                clientSubId;

	MCAPI ConnectionRequest(class ConnectionRequest const&);
	MCAPI static class ConnectionRequest fromString(std::string const&);
	MCAPI class std::vector<class AnimatedImageData, class std::allocator<class AnimatedImageData> > getAnimatedImageData(void)const;
	MCAPI std::string getArmSize(void)const;
	MCAPI class std::vector<unsigned char, class std::allocator<unsigned char> > getCapeData(void)const;
	MCAPI std::string getCapeId(void)const;
	MCAPI unsigned short getCapeImageHeight(void)const;
	MCAPI unsigned short getCapeImageWidth(void)const;
	MCAPI std::string getClientPlatformId(void)const;
	MCAPI std::string getClientPlatformOfflineId(void)const;
	MCAPI std::string getClientPlatformOnlineId(void)const;
	MCAPI unsigned __int64 getClientRandomId(void)const;
	MCAPI unsigned char getClientSubId(void)const;
	MCAPI std::string getClientThirdPartyName(void)const;
	MCAPI std::string getDeviceId(void)const;
	MCAPI enum BuildPlatform getDeviceOS(void)const;
	MCAPI class std::vector<class SerializedPersonaPieceHandle, class std::allocator<class SerializedPersonaPieceHandle> > getPersonaPieces(void)const;
	MCAPI std::string getPlayFabId(void)const;
	MCAPI std::string getSelfSignedId(void)const;
	MCAPI std::string getSkinAnimationData(void)const;
	//MCAPI class mce::Color getSkinColor(void)const;
	MCAPI class std::vector<unsigned char, class std::allocator<unsigned char> > getSkinData(void)const;
	MCAPI std::string getSkinGeometry(void)const;
	MCAPI std::string getSkinId(void)const;
	MCAPI unsigned short getSkinImageHeight(void)const;
	MCAPI unsigned short getSkinImageWidth(void)const;
	MCAPI std::string getSkinResourcePatch(void)const;
	MCAPI std::string getTenantId(void)const;
	MCAPI bool isCapeOnClassicSkin(void)const;
	MCAPI bool isClientThirdPartyNameOnly(void)const;
	MCAPI bool isEduMode(void)const;
	MCAPI bool isPersonaSkin(void)const;
	MCAPI bool isPremiumSkin(void)const;
	MCAPI std::string toString(void);
	MCAPI bool verify(class std::vector<std::string, class std::allocator<std::string > > const&, __int64);
	MCAPI bool verifySelfSigned(void);
	MCAPI ~ConnectionRequest(void);
};

static_assert(sizeof(ConnectionRequest) == 32);