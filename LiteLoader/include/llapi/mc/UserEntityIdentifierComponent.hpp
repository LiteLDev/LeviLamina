/**
 * @file  UserEntityIdentifierComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "NetworkIdentifier.hpp"
#include "Certificate.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class UserEntityIdentifierComponent.
 *
 */
class UserEntityIdentifierComponent {

#define AFTER_EXTRA
// Add Member There
public:
    NetworkIdentifier mNetworkId;
    unsigned char mClientSubId;
    mce::UUID mUUID;
    std::string mPlayFabId;
    std::unique_ptr<Certificate> mCertificate;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_USERENTITYIDENTIFIERCOMPONENT
public:
    class UserEntityIdentifierComponent& operator=(class UserEntityIdentifierComponent const &) = delete;
    UserEntityIdentifierComponent(class UserEntityIdentifierComponent const &) = delete;
    UserEntityIdentifierComponent() = delete;
#endif

public:
    /**
     * @hash   -998965720
     * @symbol  ??0UserEntityIdentifierComponent\@\@QEAA\@AEBVNetworkIdentifier\@\@W4SubClientId\@\@VUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VCertificate\@\@U?$default_delete\@VCertificate\@\@\@std\@\@\@6\@\@Z
     */
    MCAPI UserEntityIdentifierComponent(class NetworkIdentifier const &, enum class SubClientId, class mce::UUID, std::string const &, std::unique_ptr<class Certificate>);
    /**
     * @hash   -451073067
     * @symbol  ??0UserEntityIdentifierComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI UserEntityIdentifierComponent(class UserEntityIdentifierComponent &&);
    /**
     * @hash   1740791106
     * @symbol  ?isPrimaryClient\@UserEntityIdentifierComponent\@\@QEBA_NXZ
     */
    MCAPI bool isPrimaryClient() const;
    /**
     * @hash   2085004720
     * @symbol  ??4UserEntityIdentifierComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class UserEntityIdentifierComponent & operator=(class UserEntityIdentifierComponent &&);
    /**
     * @hash   -1232160062
     * @symbol  ??1UserEntityIdentifierComponent\@\@QEAA\@XZ
     */
    MCAPI ~UserEntityIdentifierComponent();
    /**
     * @hash   2112616787
     * @symbol  ?tryGetFromEntity\@UserEntityIdentifierComponent\@\@SAPEAV1\@AEAVEntityContext\@\@\@Z
     */
    MCAPI static class UserEntityIdentifierComponent * tryGetFromEntity(class EntityContext &);

};