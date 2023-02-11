/**
 * @file  MolangDescriptor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ItemDescriptor.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure MolangDescriptor.
 *
 */
struct MolangDescriptor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGDESCRIPTOR
public:
    struct MolangDescriptor& operator=(struct MolangDescriptor const &) = delete;
    MolangDescriptor(struct MolangDescriptor const &) = delete;
    MolangDescriptor() = delete;
#endif

public:
    /**
     * @hash   -541769061
     * @vftbl  0
     * @symbol  ?clone\@MolangDescriptor\@\@UEBA?AV?$unique_ptr\@UBaseDescriptor\@ItemDescriptor\@\@U?$default_delete\@UBaseDescriptor\@ItemDescriptor\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const;
    /**
     * @hash   1248028427
     * @vftbl  1
     * @symbol  ?sameItems\@MolangDescriptor\@\@UEBA_NAEBUBaseDescriptor\@ItemDescriptor\@\@_N\@Z
     */
    virtual bool sameItems(struct ItemDescriptor::BaseDescriptor const &, bool) const;
    /**
     * @hash   -543273305
     * @vftbl  2
     * @symbol  ?sameItem\@MolangDescriptor\@\@UEBA_NAEBUItemEntry\@ItemDescriptor\@\@_N\@Z
     */
    virtual bool sameItem(struct ItemDescriptor::ItemEntry const &, bool) const;
    /**
     * @hash   -878149671
     * @vftbl  3
     * @symbol  ?getFullName\@MolangDescriptor\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getFullName() const;
    /**
     * @hash   1360086529
     * @vftbl  6
     * @symbol  ?toMap\@MolangDescriptor\@\@UEBA?AV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@XZ
     */
    virtual class std::map<std::string, std::string, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> toMap() const;
    /**
     * @hash   1467891141
     * @vftbl  7
     * @symbol  ?save\@MolangDescriptor\@\@UEBA?AV?$optional\@VCompoundTag\@\@\@std\@\@XZ
     */
    virtual class std::optional<class CompoundTag> save() const;
    /**
     * @hash   340506354
     * @vftbl  8
     * @symbol  ?serialize\@MolangDescriptor\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serialize(class Json::Value &) const;
    /**
     * @hash   873784394
     * @vftbl  9
     * @symbol  ?serialize\@MolangDescriptor\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void serialize(class BinaryStream &) const;
    /**
     * @hash   -837912064
     * @vftbl  10
     * @symbol  ?getType\@MolangDescriptor\@\@UEBA?AW4InternalType\@ItemDescriptor\@\@XZ
     */
    virtual enum class ItemDescriptor::InternalType getType() const;
    /**
     * @hash   -381923851
     * @vftbl  12
     * @symbol  ?getHash\@MolangDescriptor\@\@UEBA_KXZ
     */
    virtual unsigned __int64 getHash() const;
    /**
     * @hash   -2026574062
     * @symbol  ?fromExpressionTag\@MolangDescriptor\@\@SA?AV?$unique_ptr\@UMolangDescriptor\@\@U?$default_delete\@UMolangDescriptor\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@W4MolangVersion\@\@\@Z
     */
    MCAPI static std::unique_ptr<struct MolangDescriptor> fromExpressionTag(std::string const &, enum class MolangVersion);

};