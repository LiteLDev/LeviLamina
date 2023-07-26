/**
 * @file  CompoundTag.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "CompoundTagVariant.hpp"
enum class SnbtFormat : unsigned char
{
    PartialNewLine = 0,
    AlwayNewLine = 1,
    Minimize = 2,
};
struct PrettySnbtFormat;

#undef BEFORE_EXTRA

/**
 * @brief MC class CompoundTag.
 *
 */
class CompoundTag : public Tag {

#define AFTER_EXTRA
// Add Member There
    map<std::string, CompoundTagVariant> val;

public:

    LLAPI static std::unique_ptr<CompoundTag> create();
    LLAPI map<std::string, CompoundTagVariant>& value();

    template <typename T>
    inline T const* get(class gsl::basic_string_span<char const, -1> key) const {
        return (T*)get(key);
    };

    // put value
    LLAPI void putEnd(std::string key);
    LLAPI double& putDouble(std::string key, double val);
    LLAPI void putByteArray(std::string key, char data[], size_t size);
    LLAPI void putIntArray(std::string key, int data[], size_t size);
    LLAPI struct TagMemoryChunk& putIntArray(std::string key, struct TagMemoryChunk val);

    // get value
    LLAPI double getDouble(class gsl::basic_string_span<char const, -1> key) const;
    LLAPI struct TagMemoryChunk const& getIntArray(class gsl::basic_string_span<char const, -1> key) const;

    // get tag
    LLAPI class ByteTag const* getByteTag(class gsl::basic_string_span<char const, -1> key) const;
    //BDS has implemented this interface
    //LLAPI class ShortTag const* getShortTag(class gsl::basic_string_span<char const, -1> key) const;
    LLAPI class FloatTag const* getFloatTag(class gsl::basic_string_span<char const, -1> key) const;
    LLAPI class DoubleTag const* getDoubleTag(class gsl::basic_string_span<char const, -1> key) const;
    LLAPI class ByteArrayTag const* getByteArrayTag(class gsl::basic_string_span<char const, -1> key) const;
    //LLAPI class StringTag const* getStringTag(class gsl::basic_string_span<char const, -1> key) const;
    LLAPI class IntArrayTag const* getIntArrayTag(class gsl::basic_string_span<char const, -1> key) const;
    LLAPI class ListTag const* getListTag(class gsl::basic_string_span<char const, -1> key) const;
    LLAPI class CompoundTag const* getCompoundTag(class gsl::basic_string_span<char const, -1> key) const;
    LLAPI class Tag* operator[](class gsl::basic_string_span<char const, -1> key);

    // IO
    LLAPI void setItemStack(ItemStack* item);
    LLAPI void setBlock(Block* blk);
    LLAPI bool setActor(Actor* actor) const;
    LLAPI bool setPlayer(Player* player);
    LLAPI bool setBlockActor(BlockActor* ble) const;
    LLAPI static std::unique_ptr<CompoundTag> fromItemStack(ItemStack* item);
    LLAPI static std::unique_ptr<CompoundTag> fromBlock(Block* blk);
    LLAPI static std::unique_ptr<CompoundTag> fromActor(Actor* actor);
    LLAPI static std::unique_ptr<CompoundTag> fromPlayer(Player* player);
    LLAPI static std::unique_ptr<CompoundTag> fromBlockActor(BlockActor* ble);

    // To Formatted SNBT
    LLAPI std::string toSNBT(int indent, SnbtFormat snbtFormat = SnbtFormat::PartialNewLine);
    LLAPI string toPrettySNBT(bool forPlayer = false) const;
    LLAPI string toPrettySNBT(struct PrettySnbtFormat const& format) const;
    LLAPI std::string toBinaryNBT(bool isLittleEndian = true);
    LLAPI static std::string nbtListToBinary(std::vector<std::unique_ptr<CompoundTag>> tags, bool isLittleEndian = true);
    LLAPI static std::unique_ptr<CompoundTag> fromSNBT(const std::string& snbt);
    LLAPI static std::unique_ptr<CompoundTag> fromBinaryNBT(void* data, size_t len, bool isLittleEndian = true);
    LLAPI static std::unique_ptr<CompoundTag> fromBinaryNBT(void* data, size_t len, size_t& offset, bool isLittleEndian = true);
    LLAPI static std::unique_ptr<CompoundTag> fromBinaryNBT(std::string const& data, size_t& offset, bool isLittleEndian = true);
    LLAPI static std::unique_ptr<CompoundTag> fromBinaryNBT(std::string const& data, bool isLittleEndian = true);
    LLAPI static std::vector<std::unique_ptr<CompoundTag>> nbtListFromBinary(std::string const& data, bool isLittleEndian = true);

    LLAPI std::string toNetworkNBT() const;
    LLAPI static std::unique_ptr<CompoundTag> fromNetworkNBT(std::string const& data);
    LLAPI static std::string nbtListToNetwork(std::vector<std::unique_ptr<CompoundTag>> tags);
    LLAPI static std::vector<std::unique_ptr<CompoundTag>> nbtListFromNetwork(std::string const& data);


    // Deprecated?
    LLAPI std::string toSNBT();

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDTAG
public:
    class CompoundTag& operator=(class CompoundTag const &) = delete;
    CompoundTag(class CompoundTag const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CompoundTag();
    /**
     * @vftbl  2
     * @symbol  ?write\@CompoundTag\@\@UEBAXAEAVIDataOutput\@\@\@Z
     */
    virtual void write(class IDataOutput &) const;
    /**
     * @vftbl  3
     * @symbol  ?load\@CompoundTag\@\@UEAAXAEAVIDataInput\@\@\@Z
     */
    virtual void load(class IDataInput &);
    /**
     * @vftbl  4
     * @symbol  ?toString\@CompoundTag\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string toString() const;
    /**
     * @vftbl  5
     * @symbol  ?getId\@CompoundTag\@\@UEBA?AW4Type\@Tag\@\@XZ
     */
    virtual enum class Tag::Type getId() const;
    /**
     * @vftbl  6
     * @symbol  ?equals\@CompoundTag\@\@UEBA_NAEBVTag\@\@\@Z
     */
    virtual bool equals(class Tag const &) const;
    /**
     * @vftbl  8
     * @symbol  ?print\@CompoundTag\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVPrintStream\@\@\@Z
     */
    virtual void print(std::string const &, class PrintStream &) const;
    /**
     * @vftbl  9
     * @symbol  ?copy\@CompoundTag\@\@UEBA?AV?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @vftbl  10
     * @symbol  ?hash\@CompoundTag\@\@UEBA_KXZ
     */
    virtual unsigned __int64 hash() const;
    /**
     * @symbol  ??0CompoundTag\@\@QEAA\@XZ
     */
    MCAPI CompoundTag();
    /**
     * @symbol  ??0CompoundTag\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI CompoundTag(class CompoundTag &&);
    /**
     * @symbol  ?append\@CompoundTag\@\@QEAAXAEBV1\@\@Z
     */
    MCAPI void append(class CompoundTag const &);
    /**
     * @symbol  ?begin\@CompoundTag\@\@QEBA?AV?$_Tree_const_iterator\@V?$_Tree_val\@U?$_Tree_simple_types\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTagVariant\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::_Tree_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<std::string const, class CompoundTagVariant>>>> begin() const;
    /**
     * @symbol  ?clear\@CompoundTag\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @symbol  ?clone\@CompoundTag\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> clone() const;
    /**
     * @symbol  ?contains\@CompoundTag\@\@QEBA_NV?$basic_string_span\@$$CBD$0?0\@gsl\@\@W4Type\@Tag\@\@\@Z
     */
    MCAPI bool contains(class gsl::basic_string_span<char const, -1>, enum class Tag::Type) const;
    /**
     * @symbol  ?contains\@CompoundTag\@\@QEBA_NV?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI bool contains(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol  ?deepCopy\@CompoundTag\@\@QEAAXAEBV1\@\@Z
     */
    MCAPI void deepCopy(class CompoundTag const &);
    /**
     * @symbol  ?end\@CompoundTag\@\@QEBA?AV?$_Tree_const_iterator\@V?$_Tree_val\@U?$_Tree_simple_types\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTagVariant\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::_Tree_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<std::string const, class CompoundTagVariant>>>> end() const;
    /**
     * @symbol  ?get\@CompoundTag\@\@QEAAPEAVTag\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI class Tag * get(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol  ?get\@CompoundTag\@\@QEBAPEBVTag\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI class Tag const * get(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol  ?getBoolean\@CompoundTag\@\@QEBA_NV?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI bool getBoolean(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol  ?getByte\@CompoundTag\@\@QEBAEV?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI unsigned char getByte(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol  ?getByteArray\@CompoundTag\@\@QEBAAEBUTagMemoryChunk\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI struct TagMemoryChunk const & getByteArray(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol  ?getByteTag\@CompoundTag\@\@QEAAPEAVByteTag\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI class ByteTag * getByteTag(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol  ?getCompound\@CompoundTag\@\@QEAAPEAV1\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI class CompoundTag * getCompound(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol  ?getCompound\@CompoundTag\@\@QEBAPEBV1\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI class CompoundTag const * getCompound(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol  ?getFloat\@CompoundTag\@\@QEBAMV?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI float getFloat(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol  ?getInt\@CompoundTag\@\@QEBAHV?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI int getInt(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol  ?getInt64\@CompoundTag\@\@QEBA_JV?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI __int64 getInt64(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol  ?getInt64Tag\@CompoundTag\@\@QEAAPEAVInt64Tag\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI class Int64Tag * getInt64Tag(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol  ?getInt64Tag\@CompoundTag\@\@QEBAPEBVInt64Tag\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI class Int64Tag const * getInt64Tag(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol  ?getIntTag\@CompoundTag\@\@QEAAPEAVIntTag\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI class IntTag * getIntTag(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol  ?getIntTag\@CompoundTag\@\@QEBAPEBVIntTag\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI class IntTag const * getIntTag(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol  ?getList\@CompoundTag\@\@QEAAPEAVListTag\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI class ListTag * getList(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol  ?getList\@CompoundTag\@\@QEBAPEBVListTag\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI class ListTag const * getList(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol  ?getShort\@CompoundTag\@\@QEBAFV?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI short getShort(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol  ?getShortTag\@CompoundTag\@\@QEBAPEBVShortTag\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI class ShortTag const * getShortTag(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol  ?getString\@CompoundTag\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI std::string const & getString(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol  ?getStringTag\@CompoundTag\@\@QEBAPEBVStringTag\@\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI class StringTag const * getStringTag(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol  ?isEmpty\@CompoundTag\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol  ??4CompoundTag\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class CompoundTag & operator=(class CompoundTag &&);
    /**
     * @symbol  ?put\@CompoundTag\@\@QEAAAEAVTag\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV2\@\@Z
     */
    MCAPI class Tag & put(std::string, class Tag &&);
    /**
     * @symbol  ?put\@CompoundTag\@\@QEAAPEAVTag\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@4\@\@Z
     */
    MCAPI class Tag * put(std::string, std::unique_ptr<class Tag>);
    /**
     * @symbol  ?putBoolean\@CompoundTag\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void putBoolean(std::string, bool);
    /**
     * @symbol  ?putByte\@CompoundTag\@\@QEAAAEAEV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@E\@Z
     */
    MCAPI unsigned char & putByte(std::string, unsigned char);
    /**
     * @symbol  ?putByteArray\@CompoundTag\@\@QEAAAEAUTagMemoryChunk\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U2\@\@Z
     */
    MCAPI struct TagMemoryChunk & putByteArray(std::string, struct TagMemoryChunk);
    /**
     * @symbol  ?putCompound\@CompoundTag\@\@QEAAAEAV1\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V1\@\@Z
     */
    MCAPI class CompoundTag & putCompound(std::string, class CompoundTag);
    /**
     * @symbol  ?putCompound\@CompoundTag\@\@QEAAPEAV1\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI class CompoundTag * putCompound(std::string, std::unique_ptr<class CompoundTag>);
    /**
     * @symbol  ?putFloat\@CompoundTag\@\@QEAAAEAMV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@Z
     */
    MCAPI float & putFloat(std::string, float);
    /**
     * @symbol  ?putInt\@CompoundTag\@\@QEAAAEAHV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI int & putInt(std::string, int);
    /**
     * @symbol  ?putInt64\@CompoundTag\@\@QEAAAEA_JV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_J\@Z
     */
    MCAPI __int64 & putInt64(std::string, __int64);
    /**
     * @symbol  ?putShort\@CompoundTag\@\@QEAAAEAFV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@F\@Z
     */
    MCAPI short & putShort(std::string, short);
    /**
     * @symbol  ?putString\@CompoundTag\@\@QEAAAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V23\@0\@Z
     */
    MCAPI std::string & putString(std::string, std::string);
    /**
     * @symbol  ?rawView\@CompoundTag\@\@QEBAAEBV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTagVariant\@\@U?$less\@X\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTagVariant\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI class std::map<std::string, class CompoundTagVariant, struct std::less<void>, class std::allocator<struct std::pair<std::string const, class CompoundTagVariant>>> const & rawView() const;
    /**
     * @symbol  ?remove\@CompoundTag\@\@QEAA_NV?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI bool remove(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol  ?rename\@CompoundTag\@\@QEAAXV?$basic_string_span\@$$CBD$0?0\@gsl\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void rename(class gsl::basic_string_span<char const, -1>, std::string);
    /**
     * @symbol  ?size\@CompoundTag\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 size() const;

};