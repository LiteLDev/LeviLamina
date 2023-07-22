/**
 * @file  ItemStackNetIdVariant.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
struct ItemStackNetIdTag;
struct ItemStackLegacyRequestIdTag;
struct ItemStackRequestIdTag;
enum class ItemStackNetIdType : unsigned char {
    ItemStackNetId_TypedServerNetId = 0,
    ItemStackRequestId_TypedClientNetId = 1,
    ItemStackLegacyRequestId_TypedClientNetId = 2,
};
#undef BEFORE_EXTRA

/**
 * @brief MC structure ItemStackNetIdVariant.
 *
 */
struct ItemStackNetIdVariant {

#define AFTER_EXTRA
    // Add Member There
    std::variant<
        TypedServerNetId<ItemStackNetIdTag, int, 0>, TypedClientNetId<ItemStackRequestIdTag, int, 0>,
        TypedClientNetId<ItemStackLegacyRequestIdTag, int, 0>>
        id;


#undef AFTER_EXTRA
public:
    /**
     * @symbol  ??0ItemStackNetIdVariant\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ItemStackNetIdVariant(struct ItemStackNetIdVariant &&);
    /**
     * @symbol  ??0ItemStackNetIdVariant\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ItemStackNetIdVariant(struct ItemStackNetIdVariant const &);
    /**
     * @symbol  ??0ItemStackNetIdVariant\@\@QEAA\@XZ
     */
    MCAPI ItemStackNetIdVariant();
    /**
     * @symbol  ?deserialize\@ItemStackNetIdVariant\@\@QEAAXAEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI void deserialize(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ?hasServerNetId\@ItemStackNetIdVariant\@\@QEBA_NXZ
     */
    MCAPI bool hasServerNetId() const;
    /**
     * @symbol  ?isValid\@ItemStackNetIdVariant\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol  ??4ItemStackNetIdVariant\@\@QEAAAEAU0\@AEBV?$TypedServerNetId\@UItemStackNetIdTag\@\@H$0A\@\@\@\@Z
     */
    MCAPI struct ItemStackNetIdVariant & operator=(class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const &);
    /**
     * @symbol  ??4ItemStackNetIdVariant\@\@QEAAAEAU0\@AEBV?$TypedClientNetId\@UItemStackLegacyRequestIdTag\@\@H$0A\@\@\@\@Z
     */
    MCAPI struct ItemStackNetIdVariant & operator=(class TypedClientNetId<struct ItemStackLegacyRequestIdTag, int, 0> const &);
    /**
     * @symbol  ??4ItemStackNetIdVariant\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct ItemStackNetIdVariant & operator=(struct ItemStackNetIdVariant &&);
    /**
     * @symbol  ??4ItemStackNetIdVariant\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ItemStackNetIdVariant & operator=(struct ItemStackNetIdVariant const &);
    /**
     * @symbol  ??8ItemStackNetIdVariant\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct ItemStackNetIdVariant const &) const;
    /**
     * @symbol  ?serialize\@ItemStackNetIdVariant\@\@QEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void serialize(class BinaryStream &) const;
    /**
     * @symbol  ?toString\@ItemStackNetIdVariant\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const;
    /**
     * @symbol  ?tryGetLegacyRequestId\@ItemStackNetIdVariant\@\@QEBAPEBV?$TypedClientNetId\@UItemStackLegacyRequestIdTag\@\@H$0A\@\@\@XZ
     */
    MCAPI class TypedClientNetId<struct ItemStackLegacyRequestIdTag, int, 0> const * tryGetLegacyRequestId() const;
    /**
     * @symbol  ?tryGetRequestId\@ItemStackNetIdVariant\@\@QEBAPEBV?$TypedClientNetId\@UItemStackRequestIdTag\@\@H$0A\@\@\@XZ
     */
    MCAPI class TypedClientNetId<struct ItemStackRequestIdTag, int, 0> const * tryGetRequestId() const;
    /**
     * @symbol  ?tryGetServerNetId\@ItemStackNetIdVariant\@\@QEBAPEBV?$TypedServerNetId\@UItemStackNetIdTag\@\@H$0A\@\@\@XZ
     */
    MCAPI class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const * tryGetServerNetId() const;
    /**
     * @symbol  ??1ItemStackNetIdVariant\@\@QEAA\@XZ
     */
    MCAPI ~ItemStackNetIdVariant();

};