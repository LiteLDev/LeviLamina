/**
 * @file  Pack.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Pack.
 *
 */
class Pack {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACK
public:
    class Pack& operator=(class Pack const &) = delete;
    Pack(class Pack const &) = delete;
    Pack() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~Pack();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol  ?_Delete_this\@?$_Func_impl_no_alloc\@V?$_Fake_no_copy_callable_adapter\@P8thread\@std\@\@EAAXXZPEAV12\@\@std\@\@X$$V\@std\@\@EEAAX_N\@Z
     */
    virtual void _Delete_this(bool);
    /**
     * @vftbl  6
     * @symbol  ?_Get\@?$_Func_impl_no_alloc\@V?$_Fake_no_copy_callable_adapter\@P8thread\@std\@\@EAAXXZPEAV12\@\@std\@\@X$$V\@std\@\@EEBAPEBXXZ
     */
    virtual void const * _Get() const;
    /**
     * @hash   1163053650
     * @symbol  ??0Pack\@\@QEAA\@V?$unique_ptr\@VPackManifest\@\@U?$default_delete\@VPackManifest\@\@\@std\@\@\@std\@\@V?$unique_ptr\@VPackAccessStrategy\@\@U?$default_delete\@VPackAccessStrategy\@\@\@std\@\@\@2\@V?$unique_ptr\@VSubpackInfoCollection\@\@U?$default_delete\@VSubpackInfoCollection\@\@\@std\@\@\@2\@V?$unique_ptr\@VPackMetadata\@\@U?$default_delete\@VPackMetadata\@\@\@std\@\@\@2\@\@Z
     */
    MCAPI Pack(std::unique_ptr<class PackManifest>, std::unique_ptr<class PackAccessStrategy>, std::unique_ptr<class SubpackInfoCollection>, std::unique_ptr<class PackMetadata>);
    /**
     * @hash   2076129217
     * @symbol  ?getAccessStrategy\@Pack\@\@QEAAPEAVPackAccessStrategy\@\@XZ
     */
    MCAPI class PackAccessStrategy * getAccessStrategy();
    /**
     * @hash   -1885465498
     * @symbol  ?getManifest\@Pack\@\@QEAAAEAVPackManifest\@\@XZ
     */
    MCAPI class PackManifest & getManifest();
    /**
     * @hash   -670803996
     * @symbol  ?getManifest\@Pack\@\@QEBAAEBVPackManifest\@\@XZ
     */
    MCAPI class PackManifest const & getManifest() const;
    /**
     * @hash   1186320087
     * @symbol  ?getManifestPtr\@Pack\@\@QEAAPEAVPackManifest\@\@XZ
     */
    MCAPI class PackManifest * getManifestPtr();
    /**
     * @hash   -1933286183
     * @symbol  ?getSubpackInfoStack\@Pack\@\@QEAAPEAVSubpackInfoCollection\@\@XZ
     */
    MCAPI class SubpackInfoCollection * getSubpackInfoStack();
    /**
     * @hash   609769004
     * @symbol  ?move\@Pack\@\@QEAAX$$QEAV1\@\@Z
     */
    MCAPI void move(class Pack &&);
    /**
     * @hash   -1290852589
     * @symbol  ?notifyDeleted\@Pack\@\@QEAAXXZ
     */
    MCAPI void notifyDeleted();
    /**
     * @hash   -646118781
     * @symbol  ?notifyUpdated\@Pack\@\@QEAAXXZ
     */
    MCAPI void notifyUpdated();
    /**
     * @hash   -903237851
     * @symbol  ?registerPackDeletedCallback\@Pack\@\@QEAAXPEAXV?$function\@$$A6AXAEAVPack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void registerPackDeletedCallback(void *, class std::function<void (class Pack &)>);
    /**
     * @hash   -408886187
     * @symbol  ?registerPackUpdatedCallback\@Pack\@\@QEAAXPEAXV?$function\@$$A6AXAEAVPack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void registerPackUpdatedCallback(void *, class std::function<void (class Pack &)>);
    /**
     * @hash   -1797628505
     * @symbol  ?unregisterPackDeletedCallback\@Pack\@\@QEAAXPEAX\@Z
     */
    MCAPI void unregisterPackDeletedCallback(void *);
    /**
     * @hash   1207023235
     * @symbol  ?unregisterPackUpdatedCallback\@Pack\@\@QEAAXPEAX\@Z
     */
    MCAPI void unregisterPackUpdatedCallback(void *);
    /**
     * @hash   825843067
     * @symbol  ?createPack\@Pack\@\@SA?AV?$unique_ptr\@VPack\@\@U?$default_delete\@VPack\@\@\@std\@\@\@std\@\@AEBVResourceLocation\@\@W4PackType\@\@W4PackOrigin\@\@AEAVIPackManifestFactory\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@PEAVPackSourceReport\@\@\@Z
     */
    MCAPI static std::unique_ptr<class Pack> createPack(class ResourceLocation const &, enum class PackType, enum class PackOrigin, class IPackManifestFactory &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &, class PackSourceReport *);
    /**
     * @hash   212688216
     * @symbol  ?createPackMetadata\@Pack\@\@SA?AV?$unique_ptr\@VPackMetadata\@\@U?$default_delete\@VPackMetadata\@\@\@std\@\@\@std\@\@W4PackType\@\@AEAVPackManifest\@\@AEBVPackAccessStrategy\@\@AEAVPackReport\@\@\@Z
     */
    MCAPI static std::unique_ptr<class PackMetadata> createPackMetadata(enum class PackType, class PackManifest &, class PackAccessStrategy const &, class PackReport &);

//private:

private:
    /**
     * @hash   -1509419049
     * @symbol  ?EDUCATION_METADATA_FILE\@Pack\@\@0V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<std::string> const EDUCATION_METADATA_FILE;

};