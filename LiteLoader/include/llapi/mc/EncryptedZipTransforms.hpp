/**
 * @file  EncryptedZipTransforms.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EncryptedZipTransforms.
 *
 */
class EncryptedZipTransforms {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCRYPTEDZIPTRANSFORMS
public:
    class EncryptedZipTransforms& operator=(class EncryptedZipTransforms const &) = delete;
    EncryptedZipTransforms(class EncryptedZipTransforms const &) = delete;
    EncryptedZipTransforms() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~EncryptedZipTransforms();
    /**
     * @vftbl  1
     * @symbol  ?readTransform\@EncryptedZipTransforms\@\@UEBA_NAEAV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@\@Z
     */
    virtual bool readTransform(std::vector<unsigned char> &) const;
    /**
     * @vftbl  2
     * @symbol  ?writeTransform\@EncryptedZipTransforms\@\@UEBA_NAEAV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@\@Z
     */
    virtual bool writeTransform(std::vector<unsigned char> &) const;
    /**
     * @symbol  ??0EncryptedZipTransforms\@\@QEAA\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI EncryptedZipTransforms(class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);

};