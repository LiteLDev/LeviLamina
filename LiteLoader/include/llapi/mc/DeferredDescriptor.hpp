/**
 * @file  DeferredDescriptor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../ItemDescriptor.hpp"
#include "../../Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure DeferredDescriptor.
 *
 */
struct DeferredDescriptor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFERREDDESCRIPTOR
public:
    struct DeferredDescriptor& operator=(struct DeferredDescriptor const &) = delete;
    DeferredDescriptor(struct DeferredDescriptor const &) = delete;
    DeferredDescriptor() = delete;
#endif

public:
    /**
     * @hash   -1149206004
     * @vftbl  0
     * @symbol  ?clone\@DeferredDescriptor\@\@UEBA?AV?$unique_ptr\@UBaseDescriptor\@ItemDescriptor\@\@U?$default_delete\@UBaseDescriptor\@ItemDescriptor\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const;
    /**
     * @hash   1826104840
     * @vftbl  2
     * @symbol  ?sameItem\@DeferredDescriptor\@\@UEBA_NAEBUItemEntry\@ItemDescriptor\@\@_N\@Z
     */
    virtual bool sameItem(struct ItemDescriptor::ItemEntry const &, bool) const;
    /**
     * @hash   -1554061430
     * @vftbl  3
     * @symbol  ?getFullName\@DeferredDescriptor\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getFullName() const;
    /**
     * @hash   -1348238606
     * @vftbl  6
     * @symbol  ?toMap\@DeferredDescriptor\@\@UEBA?AV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@XZ
     */
    virtual class std::map<std::string, std::string, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> toMap() const;
    /**
     * @hash   -854413722
     * @vftbl  7
     * @symbol  ?save\@DeferredDescriptor\@\@UEBA?AV?$optional\@VCompoundTag\@\@\@std\@\@XZ
     */
    virtual class std::optional<class CompoundTag> save() const;
    /**
     * @hash   1913275177
     * @vftbl  9
     * @symbol  ?serialize\@DeferredDescriptor\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void serialize(class BinaryStream &) const;
    /**
     * @hash   -1801983631
     * @vftbl  10
     * @symbol  ?getType\@DeferredDescriptor\@\@UEBA?AW4InternalType\@ItemDescriptor\@\@XZ
     */
    virtual enum class ItemDescriptor::InternalType getType() const;
    /**
     * @hash   -697395754
     * @vftbl  12
     * @symbol  ?getHash\@DeferredDescriptor\@\@UEBA_KXZ
     */
    virtual unsigned __int64 getHash() const;
    /**
     * @hash   -1612315725
     * @vftbl  13
     * @symbol  ?shouldResolve\@DeferredDescriptor\@\@UEBA_NXZ
     */
    virtual bool shouldResolve() const;
    /**
     * @hash   -1005927573
     * @vftbl  14
     * @symbol  ?resolve\@DeferredDescriptor\@\@UEBA?AV?$unique_ptr\@UBaseDescriptor\@ItemDescriptor\@\@U?$default_delete\@UBaseDescriptor\@ItemDescriptor\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> resolve() const;
    /**
     * @hash   -399738091
     * @symbol  ?deserialize\@DeferredDescriptor\@\@SA?AV?$unique_ptr\@UDeferredDescriptor\@\@U?$default_delete\@UDeferredDescriptor\@\@\@std\@\@\@std\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI static std::unique_ptr<struct DeferredDescriptor> deserialize(class ReadOnlyBinaryStream &);

//private:
    /**
     * @hash   -1924262907
     * @symbol  ?_initFromBlockLegacy\@DeferredDescriptor\@\@AEBA?AV?$unique_ptr\@UBaseDescriptor\@ItemDescriptor\@\@U?$default_delete\@UBaseDescriptor\@ItemDescriptor\@\@\@std\@\@\@std\@\@AEBVBlockLegacy\@\@$$QEAV?$WeakPtr\@VItem\@\@\@\@\@Z
     */
    MCAPI std::unique_ptr<struct ItemDescriptor::BaseDescriptor> _initFromBlockLegacy(class BlockLegacy const &, class WeakPtr<class Item> &&) const;
    /**
     * @hash   -1293322725
     * @symbol  ?_initFromItem\@DeferredDescriptor\@\@AEBA?AV?$unique_ptr\@UBaseDescriptor\@ItemDescriptor\@\@U?$default_delete\@UBaseDescriptor\@ItemDescriptor\@\@\@std\@\@\@std\@\@$$QEAV?$WeakPtr\@VItem\@\@\@\@F\@Z
     */
    MCAPI std::unique_ptr<struct ItemDescriptor::BaseDescriptor> _initFromItem(class WeakPtr<class Item> &&, short) const;

};