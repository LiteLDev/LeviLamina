#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"

class CompoundTag : public ::Tag {

public:
    // prevent constructor by default
    CompoundTag& operator=(CompoundTag const&) = delete;
    CompoundTag(CompoundTag const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?write\@CompoundTag\@\@UEBAXAEAVIDataOutput\@\@\@Z
     */
    virtual void write(class IDataOutput&) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?load\@CompoundTag\@\@UEAAXAEAVIDataInput\@\@\@Z
     */
    virtual void load(class IDataInput&); // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?toString\@CompoundTag\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string toString() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getId\@CompoundTag\@\@UEBA?AW4Type\@Tag\@\@XZ
     */
    virtual enum class Tag::Type getId() const; // NOLINT
    /**
     * @vftbl 6
     * @symbol ?equals\@CompoundTag\@\@UEBA_NAEBVTag\@\@\@Z
     */
    virtual bool equals(class Tag const&) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol
     * ?print\@CompoundTag\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVPrintStream\@\@\@Z
     */
    virtual void print(std::string const&, class PrintStream&) const; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?copy\@CompoundTag\@\@UEBA?AV?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class Tag> copy() const; // NOLINT
    /**
     * @vftbl 10
     * @symbol ?hash\@CompoundTag\@\@UEBA_KXZ
     */
    virtual unsigned __int64 hash() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPOUNDTAG
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CompoundTag(); // NOLINT
#endif
    /**
     * @symbol ??0CompoundTag\@\@QEAA\@XZ
     */
    MCAPI CompoundTag(); // NOLINT
    /**
     * @symbol ??0CompoundTag\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI CompoundTag(class CompoundTag&&); // NOLINT
    /**
     * @symbol ?append\@CompoundTag\@\@QEAAXAEBV1\@\@Z
     */
    MCAPI void append(class CompoundTag const&); // NOLINT
    /**
     * @symbol
     * ?begin\@CompoundTag\@\@QEBA?AV?$_Tree_const_iterator\@V?$_Tree_val\@U?$_Tree_simple_types\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTagVariant\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::_Tree_const_iterator<class std::_Tree_val<
        struct std::_Tree_simple_types<struct std::pair<std::string const, class CompoundTagVariant>>>>
    begin() const; // NOLINT
    /**
     * @symbol ?clear\@CompoundTag\@\@QEAAXXZ
     */
    MCAPI void clear(); // NOLINT
    /**
     * @symbol
     * ?clone\@CompoundTag\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> clone() const; // NOLINT
    /**
     * @symbol
     * ?contains\@CompoundTag\@\@QEBA_NV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@W4Type\@Tag\@\@\@Z
     */
    MCAPI bool contains(class std::basic_string_view<char, struct std::char_traits<char>>, enum class Tag::Type)
        const; // NOLINT
    /**
     * @symbol ?contains\@CompoundTag\@\@QEBA_NV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI bool contains(class std::basic_string_view<char, struct std::char_traits<char>>) const; // NOLINT
    /**
     * @symbol ?deepCopy\@CompoundTag\@\@QEAAXAEBV1\@\@Z
     */
    MCAPI void deepCopy(class CompoundTag const&); // NOLINT
    /**
     * @symbol
     * ?end\@CompoundTag\@\@QEBA?AV?$_Tree_const_iterator\@V?$_Tree_val\@U?$_Tree_simple_types\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTagVariant\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::_Tree_const_iterator<class std::_Tree_val<
        struct std::_Tree_simple_types<struct std::pair<std::string const, class CompoundTagVariant>>>>
    end() const; // NOLINT
    /**
     * @symbol ?get\@CompoundTag\@\@QEAAPEAVTag\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class Tag* get(class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
    /**
     * @symbol ?get\@CompoundTag\@\@QEBAPEBVTag\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class Tag const* get(class std::basic_string_view<char, struct std::char_traits<char>>) const; // NOLINT
    /**
     * @symbol ?getBoolean\@CompoundTag\@\@QEBA_NV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI bool getBoolean(class std::basic_string_view<char, struct std::char_traits<char>>) const; // NOLINT
    /**
     * @symbol ?getByte\@CompoundTag\@\@QEBAEV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI unsigned char getByte(class std::basic_string_view<char, struct std::char_traits<char>>) const; // NOLINT
    /**
     * @symbol
     * ?getByteArray\@CompoundTag\@\@QEBAAEBUTagMemoryChunk\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI struct TagMemoryChunk const&
        getByteArray(class std::basic_string_view<char, struct std::char_traits<char>>) const; // NOLINT
    /**
     * @symbol
     * ?getByteTag\@CompoundTag\@\@QEAAPEAVByteTag\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class ByteTag* getByteTag(class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
    /**
     * @symbol ?getCompound\@CompoundTag\@\@QEAAPEAV1\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class CompoundTag* getCompound(class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
    /**
     * @symbol ?getCompound\@CompoundTag\@\@QEBAPEBV1\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class CompoundTag const*
        getCompound(class std::basic_string_view<char, struct std::char_traits<char>>) const; // NOLINT
    /**
     * @symbol ?getFloat\@CompoundTag\@\@QEBAMV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI float getFloat(class std::basic_string_view<char, struct std::char_traits<char>>) const; // NOLINT
    /**
     * @symbol ?getInt\@CompoundTag\@\@QEBAHV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI int getInt(class std::basic_string_view<char, struct std::char_traits<char>>) const; // NOLINT
    /**
     * @symbol ?getInt64\@CompoundTag\@\@QEBA_JV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI __int64 getInt64(class std::basic_string_view<char, struct std::char_traits<char>>) const; // NOLINT
    /**
     * @symbol
     * ?getInt64Tag\@CompoundTag\@\@QEAAPEAVInt64Tag\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class Int64Tag* getInt64Tag(class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
    /**
     * @symbol
     * ?getInt64Tag\@CompoundTag\@\@QEBAPEBVInt64Tag\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class Int64Tag const*
        getInt64Tag(class std::basic_string_view<char, struct std::char_traits<char>>) const; // NOLINT
    /**
     * @symbol
     * ?getIntTag\@CompoundTag\@\@QEAAPEAVIntTag\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class IntTag* getIntTag(class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
    /**
     * @symbol
     * ?getIntTag\@CompoundTag\@\@QEBAPEBVIntTag\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class IntTag const*
        getIntTag(class std::basic_string_view<char, struct std::char_traits<char>>) const; // NOLINT
    /**
     * @symbol ?getList\@CompoundTag\@\@QEAAPEAVListTag\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class ListTag* getList(class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
    /**
     * @symbol ?getList\@CompoundTag\@\@QEBAPEBVListTag\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class ListTag const*
        getList(class std::basic_string_view<char, struct std::char_traits<char>>) const; // NOLINT
    /**
     * @symbol ?getShort\@CompoundTag\@\@QEBAFV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI short getShort(class std::basic_string_view<char, struct std::char_traits<char>>) const; // NOLINT
    /**
     * @symbol
     * ?getShortTag\@CompoundTag\@\@QEBAPEBVShortTag\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class ShortTag const*
        getShortTag(class std::basic_string_view<char, struct std::char_traits<char>>) const; // NOLINT
    /**
     * @symbol
     * ?getString\@CompoundTag\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@\@Z
     */
    MCAPI std::string const&
          getString(class std::basic_string_view<char, struct std::char_traits<char>>) const; // NOLINT
    /**
     * @symbol
     * ?getStringTag\@CompoundTag\@\@QEBAPEBVStringTag\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class StringTag const*
        getStringTag(class std::basic_string_view<char, struct std::char_traits<char>>) const; // NOLINT
    /**
     * @symbol ?isEmpty\@CompoundTag\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const; // NOLINT
    /**
     * @symbol ??4CompoundTag\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class CompoundTag& operator=(class CompoundTag&&); // NOLINT
    /**
     * @symbol
     * ?put\@CompoundTag\@\@QEAAPEAVTag\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@4\@\@Z
     */
    MCAPI class Tag* put(std::string, std::unique_ptr<class Tag>); // NOLINT
    /**
     * @symbol
     * ?put\@CompoundTag\@\@QEAAAEAVTag\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV2\@\@Z
     */
    MCAPI class Tag& put(std::string, class Tag&&); // NOLINT
    /**
     * @symbol
     * ?putBoolean\@CompoundTag\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void putBoolean(std::string, bool); // NOLINT
    /**
     * @symbol
     * ?putByte\@CompoundTag\@\@QEAAAEAEV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@E\@Z
     */
    MCAPI unsigned char& putByte(std::string, unsigned char); // NOLINT
    /**
     * @symbol
     * ?putByteArray\@CompoundTag\@\@QEAAAEAUTagMemoryChunk\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U2\@\@Z
     */
    MCAPI struct TagMemoryChunk& putByteArray(std::string, struct TagMemoryChunk); // NOLINT
    /**
     * @symbol
     * ?putCompound\@CompoundTag\@\@QEAAPEAV1\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI class CompoundTag* putCompound(std::string, std::unique_ptr<class CompoundTag>); // NOLINT
    /**
     * @symbol
     * ?putCompound\@CompoundTag\@\@QEAAAEAV1\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V1\@\@Z
     */
    MCAPI class CompoundTag& putCompound(std::string, class CompoundTag); // NOLINT
    /**
     * @symbol
     * ?putFloat\@CompoundTag\@\@QEAAAEAMV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@Z
     */
    MCAPI float& putFloat(std::string, float); // NOLINT
    /**
     * @symbol
     * ?putInt\@CompoundTag\@\@QEAAAEAHV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI int& putInt(std::string, int); // NOLINT
    /**
     * @symbol
     * ?putInt64\@CompoundTag\@\@QEAAAEA_JV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_J\@Z
     */
    MCAPI __int64& putInt64(std::string, __int64); // NOLINT
    /**
     * @symbol
     * ?putShort\@CompoundTag\@\@QEAAAEAFV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@F\@Z
     */
    MCAPI short& putShort(std::string, short); // NOLINT
    /**
     * @symbol
     * ?putString\@CompoundTag\@\@QEAAAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V23\@0\@Z
     */
    MCAPI std::string& putString(std::string, std::string); // NOLINT
    /**
     * @symbol
     * ?rawView\@CompoundTag\@\@QEBAAEBV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTagVariant\@\@U?$less\@X\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTagVariant\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI class std::map<
        std::string,
        class CompoundTagVariant,
        struct std::less<void>,
        class std::allocator<struct std::pair<std::string const, class CompoundTagVariant>>> const&
    rawView() const; // NOLINT
    /**
     * @symbol ?remove\@CompoundTag\@\@QEAA_NV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI bool remove(class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
    /**
     * @symbol
     * ?rename\@CompoundTag\@\@QEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI void rename(class std::basic_string_view<char, struct std::char_traits<char>>, std::string); // NOLINT
    /**
     * @symbol ?size\@CompoundTag\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 size() const; // NOLINT
};
