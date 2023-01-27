/**
 * @file  InternalItemDescriptor.hpp
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
 * @brief MC structure InternalItemDescriptor.
 *
 */
struct InternalItemDescriptor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERNALITEMDESCRIPTOR
public:
    struct InternalItemDescriptor& operator=(struct InternalItemDescriptor const &) = delete;
    InternalItemDescriptor(struct InternalItemDescriptor const &) = delete;
    InternalItemDescriptor() = delete;
#endif

public:
    /**
     * @hash   -1267413781
     * @vftbl  0
     * @symbol  ?clone\@InternalItemDescriptor\@\@UEBA?AV?$unique_ptr\@UBaseDescriptor\@ItemDescriptor\@\@U?$default_delete\@UBaseDescriptor\@ItemDescriptor\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const;
    /**
     * @hash   -69093353
     * @vftbl  2
     * @symbol  ?sameItem\@InternalItemDescriptor\@\@UEBA_NAEBUItemEntry\@ItemDescriptor\@\@_N\@Z
     */
    virtual bool sameItem(struct ItemDescriptor::ItemEntry const &, bool) const;
    /**
     * @hash   1707952809
     * @vftbl  3
     * @symbol  ?getFullName\@InternalItemDescriptor\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getFullName() const;
    /**
     * @hash   1238882927
     * @vftbl  4
     * @symbol  ?getItem\@InternalItemDescriptor\@\@UEBA?AUItemEntry\@ItemDescriptor\@\@XZ
     */
    virtual struct ItemDescriptor::ItemEntry getItem() const;
    /**
     * @hash   -1785545199
     * @vftbl  6
     * @symbol  ?toMap\@InternalItemDescriptor\@\@UEBA?AV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@XZ
     */
    virtual class std::map<std::string, std::string, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> toMap() const;
    /**
     * @hash   1997708789
     * @vftbl  7
     * @symbol  ?save\@InternalItemDescriptor\@\@UEBA?AV?$optional\@VCompoundTag\@\@\@std\@\@XZ
     */
    virtual class std::optional<class CompoundTag> save() const;
    /**
     * @hash   -1318182086
     * @vftbl  9
     * @symbol  ?serialize\@InternalItemDescriptor\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void serialize(class BinaryStream &) const;
    /**
     * @hash   -221283888
     * @vftbl  10
     * @symbol  ?getType\@InternalItemDescriptor\@\@UEBA?AW4InternalType\@ItemDescriptor\@\@XZ
     */
    virtual enum class ItemDescriptor::InternalType getType() const;
    /**
     * @hash   -515976203
     * @vftbl  12
     * @symbol  ?getHash\@InternalItemDescriptor\@\@UEBA_KXZ
     */
    virtual unsigned __int64 getHash() const;
    /**
     * @hash   -1047412345
     * @symbol  ?deserialize\@InternalItemDescriptor\@\@SA?AV?$unique_ptr\@UInternalItemDescriptor\@\@U?$default_delete\@UInternalItemDescriptor\@\@\@std\@\@\@std\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI static std::unique_ptr<struct InternalItemDescriptor> deserialize(class ReadOnlyBinaryStream &);

};