#ifndef NBT_HEAD_BNTYGTFREQXCPVMFFG
#define NBT_HEAD_BNTYGTFREQXCPVMFFG

#include <cinttypes>
#include <ostream>
#include <istream>
#include <memory>
#include <cstddef>
#include <type_traits>
#include <vector>
#include <map>
#include <cctype>

#if defined(__BYTE_ORDER) && __BYTE_ORDER == __BIG_ENDIAN || \
    defined(__BIG_ENDIAN__) || \
    defined(__ARMEB__) || \
    defined(__THUMBEB__) || \
    defined(__AARCH64EB__) || \
    defined(_MIBSEB) || defined(__MIBSEB) || defined(__MIBSEB__)
#	define NBT_BIG_ENDIAN
#elif defined(__BYTE_ORDER) && __BYTE_ORDER == __LITTLE_ENDIAN || \
    defined(__LITTLE_ENDIAN__) || \
    defined(__ARMEL__) || \
    defined(__THUMBEL__) || \
    defined(__AARCH64EL__) || \
    defined(_MIPSEL) || defined(__MIPSEL) || defined(__MIPSEL__) || \
	defined(__MINGW32__)
#else
//#	error "unknown architecture"
#endif

namespace nbt {

enum class tag_id : std::uint8_t {
	tag_end, tag_byte, tag_short, tag_int, tag_long, tag_float,
	tag_double, tag_bytearray, tag_string, tag_list, tag_compound,
	tag_intarray, tag_longarray
};

} // namespace nbt

namespace std {

string to_string(nbt::tag_id tid);

} // namespace std

namespace nbt {

inline int cheof(std::istream & input) {
	int value = input.get();
	if (value == EOF)
		throw std::runtime_error("EOF");
	return value;
}

std::ostream & operator<<(std::ostream & output, tag_id tid);

template <typename number_t>
number_t reverse(number_t number) {
	constexpr std::size_t n = sizeof(number_t);
	union {
		number_t number;
		std::uint8_t data[n];
	} tmp { number };
	for (std::size_t i = 0; i < n/2; ++i) {
		std::uint8_t z = tmp.data[i];
		tmp.data[i] = tmp.data[n - 1 - i];
		tmp.data[n - 1 - i] = z;
	}
	return tmp.number;
}

template <typename number_t>
number_t net_order(number_t number) {
#ifndef NBT_BIG_ENDIAN
	return reverse(number);
#else
	return number;
#endif
}

template <typename number_t>
number_t disk_order(number_t number) {
#ifdef NBT_BIG_ENDIAN
	return reverse(number);
#else
	return number;
#endif
}

struct context {
	enum class orders {
		big_endian, little_endian
	} order;
	enum class formats {
		bin, zigzag, mojangson, zint
	} format;
	static const context & get(std::ios_base & ios);
	void set(std::ios_base & ios) const;
};

inline std::istream & operator>>(std::istream & input, const context & ctxt) {
	ctxt.set(input);
	return input;
}

inline std::ostream & operator<<(std::ostream & output, const context & ctxt) {
	ctxt.set(output);
	return output;
}

namespace contexts {

inline const context java {
	context::orders::big_endian,
	context::formats::bin
}, bedrock_net {
	context::orders::little_endian,
	context::formats::zigzag
}, bedrock_disk {
	context::orders::little_endian,
	context::formats::bin
}, kbt {
	context::orders::big_endian,
	context::formats::zint
}, mojangson {
	context::orders::big_endian,
	context::formats::mojangson
};

} // namespace contexts

template <typename number_t>
number_t correct_order(number_t number, const context::orders order) {
	switch (order) {
	case context::orders::little_endian:
		return disk_order(number);
	case context::orders::big_endian:
	default:
		return net_order(number);
	}
}

std::int32_t load_varint(std::istream & input);

void dump_varint(std::ostream & output, std::int32_t value);

std::int64_t load_varlong(std::istream & input);

void dump_varlong(std::ostream & output, std::int64_t value);

template <typename number_t>
number_t load_flat(std::istream & input, const context::orders order) {
	constexpr std::size_t n = sizeof(number_t);
	union {
		number_t number;
		char data[n];
	} tmp;
	input.read(tmp.data, n);
	return correct_order(tmp.number, order);
}

template <typename number_t>
number_t load_text(std::istream & input) {
	return static_cast<number_t>(load_text<std::make_signed_t<number_t>>(input));
}

template <>
std::int8_t load_text<std::int8_t>(std::istream & input);

template <>
std::int16_t load_text<std::int16_t>(std::istream & input);

template <>
std::int32_t load_text<std::int32_t>(std::istream & input);

template <>
std::int64_t load_text<std::int64_t>(std::istream & input);

template <>
float load_text<float>(std::istream & input);

template <>
double load_text<double>(std::istream & input);

template <typename number_t>
number_t load(std::istream & input, const context & ctxt) {
	if (ctxt.format == context::formats::mojangson)
		return load_text<number_t>(input);
	else
		return load_flat<number_t>(input, ctxt.order);
}

template <>
std::int32_t load<std::int32_t>(std::istream & input, const context & ctxt);

template <>
inline std::uint32_t load<std::uint32_t>(std::istream & input, const context & ctxt) {
	return static_cast<std::uint32_t>(load<std::int32_t>(input, ctxt));
}

template <>
std::int64_t load<std::int64_t>(std::istream & input, const context & ctxt);

template <>
inline std::uint64_t load<std::uint64_t>(std::istream & input, const context & ctxt) {
	return static_cast<std::uint64_t>(load<std::int64_t>(input, ctxt));
}

void skip_space(std::istream & input);

std::size_t load_size(std::istream & input, const context & ctxt);
void dump_size(std::ostream & output, const context & ctxt, std::size_t size);

template <typename F>
void scan_sequence_text(std::istream & input, F element_action) {
	for (;;) {
		skip_space(input);
		char c = cheof(input);
		if (c == ']') {
			break;
		}
		input.putback(c);
 		element_action();
		skip_space(input);
		int next = cheof(input);
		switch (next) {
			case ',': continue;
			case ']': return;
			default: throw std::runtime_error(std::string("unexpected character: ") + char(next));
		}
	}
}

template <typename number_t>
std::vector<number_t> load_array_text(std::istream & input);

template <typename number_t>
std::vector<number_t> load_array_bin(std::istream & input, const context & ctxt) {
	auto size = load_size(input, ctxt);
	std::vector<number_t> result;
	result.reserve(size);
	for (std::size_t i = 0; i < size; i++)
		result.emplace_back(load<number_t>(input, ctxt));
	return result;
}

template <typename number_t>
std::vector<number_t> load_array(std::istream & input, const context & ctxt) {
	if (ctxt.format == context::formats::mojangson)
		return load_array_text<number_t>(input);
	else
		return load_array_bin<number_t>(input, ctxt);
}

template <typename number_t>
void dump_flat(std::ostream & output, number_t number, const context::orders order) {
	constexpr std::size_t n = sizeof(number_t);
	union {
		number_t number;
		char data[n];
	} tmp { correct_order(number, order) };
	output.write(tmp.data, n);
}

template <typename number_t>
void dump_text(std::ostream & output, number_t number) {
	dump_text(output, std::make_signed_t<number_t>(number));
}

template <>
void dump_text<std::int8_t>(std::ostream & output, std::int8_t number);

template <>
void dump_text<std::int16_t>(std::ostream & output, std::int16_t number);

template <>
void dump_text<std::int32_t>(std::ostream & output, std::int32_t number);

template <>
void dump_text<std::int64_t>(std::ostream & output, std::int64_t number);

template <>
void dump_text<float>(std::ostream & output, float number);

template <>
void dump_text<double>(std::ostream & output, double number);

template <typename number_t>
void dump(std::ostream & output, number_t number, const context & ctxt) {
	if (ctxt.format == context::formats::mojangson)
		dump_text(output, number);
	else
		dump_flat(output, number, ctxt.order);
}

template <>
void dump<std::int32_t>(std::ostream & output, std::int32_t number, const context & ctxt);

template <>
inline void dump<std::uint32_t>(std::ostream & output, std::uint32_t number, const context & ctxt) {
	dump(output, static_cast<std::int32_t>(number), ctxt);
}

template <>
void dump<std::int64_t>(std::ostream & output, std::int64_t number, const context & ctxt);

template <>
inline void dump<std::uint64_t>(std::ostream & output, std::uint64_t number, const context & ctxt) {
	dump(output, static_cast<std::int64_t>(number), ctxt);
}

template <typename number_t>
void dump_array_text(std::ostream & output, const std::vector<number_t> & array);

template <typename number_t>
void dump_array_bin(std::ostream & output, const std::vector<number_t> & array, const context & ctxt) {
	dump_size(output, ctxt, array.size());
	for (const auto & element : array)
		dump(output, element, ctxt);
}

template <typename number_t>
void dump_array(std::ostream & output, const std::vector<number_t> & array, const context & ctxt) {
	if (ctxt.format == context::formats::mojangson)
		dump_array_text(output, array);
	else
		dump_array_bin(output, array, ctxt);
}

template <typename element_type, typename F>
void dump_list(std::ostream & output, tag_id aid, const std::vector<element_type> & list, F action) {
	const context & ctxt = context::get(output);
	if (ctxt.format == context::formats::mojangson) {
		output << '[';
	} else {
		output.put(static_cast<char>(aid));
		auto size = static_cast<std::size_t>(list.size());
		dump_size(output, ctxt, size);
	}
	auto iter = list.cbegin();
	auto end = list.cend();
	if (iter != end) {
		action(*iter, ctxt);
		for (++iter; iter != end; ++iter) {
			if (ctxt.format == context::formats::mojangson)
				output << ',';
			action(*iter, ctxt);
		}
	}
	if (ctxt.format == context::formats::mojangson)
		output << ']';
}

template <typename tag_type, typename F>
std::unique_ptr<tag_type> load_list(std::istream & input, F action) {
	const context & ctxt = context::get(input);
	auto ptr = std::make_unique<tag_type>();
	typename tag_type::value_type & result = ptr->value;
	if (ctxt.format != context::formats::mojangson) {
		std::size_t size = load_size(input, ctxt);
		result.reserve(size);
		for (std::size_t i = 0; i < size; i++)
			result.emplace_back(action(ctxt));
	} else {
		scan_sequence_text(input, [&] {
			result.emplace_back(action(ctxt));
		});
	}
	result.shrink_to_fit();
	return ptr;
}

tag_id deduce_tag(std::istream & input);

namespace tags {

	struct tag {
		virtual tag_id id() const noexcept = 0;
		virtual void write(std::ostream & output) const = 0;
		virtual std::unique_ptr<tag> copy() const = 0;
		virtual ~tag() {}
	};

	template <tag_id tid>
	struct find_by;

	template <typename value_type>
	struct find_of;

	std::unique_ptr<tag> read(tag_id tid, std::istream & input);

	template <typename tag_type>
	std::unique_ptr<tag_type> cast(std::unique_ptr<tag> && ptr) {
		static_assert(std::is_base_of<tag, tag_type>::value);
		std::unique_ptr<tag_type> result(dynamic_cast<tag_type *>(ptr.release()));
		return result;
	}

	template <typename tag_type>
	std::unique_ptr<const tag_type> cast(std::unique_ptr<const tag> & ptr) {
		static_assert(std::is_base_of<tag, tag_type>::value);
		std::unique_ptr<const tag_type> result(dynamic_cast<const tag_type *>(ptr.release()));
		return result;
	}

#	define TAG_FIND(T) \
		template <> \
		struct find_by<T::tid> final { \
			typedef T type; \
		}; \
		template <> \
		struct find_of<T::value_type> final { \
			typedef T type; \
		};

	template <tag_id tid>
	using tag_by = typename find_by<tid>::type;

	template <typename value_type>
	using tag_of = typename find_of<value_type>::type;

	struct end_tag final : public tag {
		typedef std::nullptr_t value_type;
		static constexpr tag_id tid = tag_id::tag_end;
		virtual tag_id id() const noexcept override {
			return tid;
		}
		virtual void write(std::ostream & output) const override;
		virtual std::unique_ptr<tag> copy() const override;
	};
	inline end_tag end;
	TAG_FIND(end_tag)

	template <tag_id TID, typename number_t>
	struct numeric_tag : public tag {
		typedef number_t value_type;
		value_type value;
		static constexpr tag_id tid = TID;
		virtual tag_id id() const noexcept override {
			return tid;
		}
		numeric_tag() = default;
		constexpr numeric_tag(value_type number) : value(number) {}
		static std::unique_ptr<numeric_tag> read(std::istream & input) {
			return std::make_unique<numeric_tag>(load<value_type>(input, context::get(input)));
		}
		virtual void write(std::ostream & output) const override {
			dump(output, value, context::get(output));
		}
		virtual std::unique_ptr<tag> copy() const override {
			return std::make_unique<numeric_tag>(value);
		}
	};

#	define NUMERIC_TAG(name, tid, number_t) \
		using name = numeric_tag<tid, number_t>; \
		TAG_FIND(name)

	NUMERIC_TAG(byte_tag, tag_id::tag_byte, std::int8_t)
	NUMERIC_TAG(short_tag, tag_id::tag_short, std::int16_t)
	NUMERIC_TAG(int_tag, tag_id::tag_int, std::int32_t)
	NUMERIC_TAG(long_tag, tag_id::tag_long, std::int64_t)
	NUMERIC_TAG(float_tag, tag_id::tag_float, float)
	NUMERIC_TAG(double_tag, tag_id::tag_double, double)

#	undef NUMERIC_TAG

	template <tag_id TID, typename number_t, char prefix_c>
	struct array_tag final : public tag {
		typedef number_t element_type;
		typedef std::vector<element_type> value_type;
		static constexpr char prefix = prefix_c;
		value_type value;
		static constexpr tag_id tid = TID;
		virtual tag_id id() const noexcept override {
			return tid;
		}
		array_tag() = default;
		array_tag(const value_type & array) : value(array) {}
		array_tag(value_type && array) : value(std::move(array)) {}
		static std::unique_ptr<array_tag> read(std::istream & input) {
			const context & ctxt = context::get(input);
			auto result = std::make_unique<array_tag>(load_array<element_type>(input, ctxt));
			return result;
		}
		virtual void write(std::ostream & output) const override {
			const context & ctxt = context::get(output);
			dump_array(output, value, ctxt);
		}
		virtual std::unique_ptr<tag> copy() const override {
			return std::make_unique<array_tag>(value);
		}
	};

#	define ARRAY_TAG(name, tid, number_t, prefix) \
		using name = array_tag<tid, number_t, prefix>; \
		TAG_FIND(name)

	ARRAY_TAG(bytearray_tag, tag_id::tag_bytearray, std::int8_t, 'B')
	ARRAY_TAG(intarray_tag, tag_id::tag_intarray, std::int32_t, 'I')
	ARRAY_TAG(longarray_tag, tag_id::tag_longarray, std::int64_t, 'L')

#	undef ARRAY_TAG

	struct string_tag final : public tag {
		typedef std::string value_type;
		value_type value;
		static constexpr tag_id tid = tag_id::tag_string;
		virtual tag_id id() const noexcept override {
			return tag_id::tag_string;
		}
		string_tag() = default;
		string_tag(const value_type & string);
		string_tag(value_type && string);
		static std::unique_ptr<string_tag> read(std::istream & input);
		virtual void write(std::ostream & output) const override;
		virtual std::unique_ptr<tag> copy() const override;
	};
	
	TAG_FIND(string_tag)

	struct tag_list_tag;

	struct list_tag : public tag {
		static constexpr tag_id tid = tag_id::tag_list;
		virtual tag_id id() const noexcept override {
			return tag_id::tag_list;
		}
		virtual tag_id element_id() const noexcept = 0;
		virtual size_t size() const noexcept = 0;
		virtual bool heavy() const noexcept = 0;
		virtual	std::unique_ptr<tag> operator[](size_t i) const = 0;
		static std::unique_ptr<list_tag> read(std::istream & input);
		virtual tag_list_tag as_tags() = 0;
	};

	template <>
	struct find_by<tag_id::tag_list> final {
		typedef list_tag type;
	};

	struct tag_list_tag final : public list_tag {
		tag_id eid;
		typedef std::unique_ptr<tag> element_type;
		typedef std::vector<element_type> value_type;
		value_type value;
		virtual tag_id element_id() const noexcept override {
			return value.empty() ? eid : (eid != tag_id::tag_end ? eid : value[0]->id());
		}
		virtual size_t size() const noexcept override {
			return value.size();
		}
		virtual bool heavy() const noexcept override {
			return true;
		}
		virtual	std::unique_ptr<tag> operator[](size_t i) const override;
		tag_list_tag();
		explicit tag_list_tag(tag_id tid);
		tag_list_tag(const tag_list_tag & other);
		tag_list_tag(const value_type & list, tag_id tid = tag_id::tag_end);
		tag_list_tag(value_type && list, tag_id tid = tag_id::tag_end);
		virtual void write(std::ostream & output) const override;
		virtual std::unique_ptr<tag> copy() const override;
		virtual tag_list_tag as_tags() override;
	};

	template <tag_id tid>
	struct find_list_by;

	template <typename value_type>
	struct find_list_of;

	template <tag_id tid>
	using list_by = typename find_list_by<tid>::type;

	template <typename value_type>
	using list_of = typename find_list_of<value_type>::type;

#	define FIND_LIST_TAG(name) \
		template <> \
		struct find_list_by<name::eid> { \
			typedef name type; \
		}; \
		template <> \
		struct find_list_of<name::element_type> { \
			typedef name type; \
		};

	struct end_list_tag final : public list_tag {
		typedef end_tag tag_type;
		static_assert(std::is_base_of<tag, tag_type>::value);
		typedef typename end_tag::value_type element_type;
		typedef std::vector<element_type> value_type;
		static constexpr tag_id eid = tag_type::tid;
		virtual tag_id element_id() const noexcept override {
			return eid;
		}
		virtual size_t size() const noexcept override {
			return 0u;
		}
		virtual bool heavy() const noexcept override {
			return false;
		}
		virtual	std::unique_ptr<tag> operator[](size_t i) const override;
		end_list_tag() = default;
		static std::unique_ptr<end_list_tag> read_content(std::istream & input);
		virtual void write(std::ostream & output) const override;
		virtual std::unique_ptr<tag> copy() const override;
		virtual tag_list_tag as_tags() override;
	};
	inline end_list_tag end_list;

	FIND_LIST_TAG(end_list_tag)

	template <typename T>
	struct number_list_tag final : public list_tag {
		typedef T tag_type;
		static_assert(std::is_base_of<tag, tag_type>::value);
		typedef typename T::value_type element_type;
		typedef std::vector<element_type> value_type;
		static constexpr tag_id eid = tag_type::tid;
		virtual tag_id element_id() const noexcept override {
			return eid;
		}
		value_type value;
		virtual size_t size() const noexcept override {
			return value.size();
		}
		virtual bool heavy() const noexcept override {
			return false;
		}
		virtual	std::unique_ptr<tag> operator[](size_t i) const override {
			return std::make_unique<tag_type>(value.at(i));
		}
		number_list_tag() = default;
		number_list_tag(const value_type & list) : value(list) {}
		number_list_tag(value_type && list) : value(std::move(list)) {}
		static std::unique_ptr<number_list_tag> read_content(std::istream & input) {
			return load_list<number_list_tag>(input, [&input](const context & ctxt) -> element_type {
				return load<element_type>(input, ctxt);
			});
		}
		virtual void write(std::ostream & output) const override {
			dump_list(output, eid, value, [&output](const element_type & number, const context & ctxt) {
				dump(output, number, ctxt);
			});
		}
		virtual std::unique_ptr<tag> copy() const override {
			return std::make_unique<number_list_tag>(*this);
		}
		virtual tag_list_tag as_tags() override {
			tag_list_tag result(eid);
			result.value.reserve(value.size());
			for (auto each : value)
				result.value.push_back(std::make_unique<tag_type>(each));
			value.clear();
			value.shrink_to_fit();
			return result;
		}
	};

#	define NUMBER_LIST_TAG(name, tag_type) \
		using name = number_list_tag<tag_type>; \
		FIND_LIST_TAG(name)

	NUMBER_LIST_TAG(byte_list_tag, byte_tag)
	NUMBER_LIST_TAG(short_list_tag, short_tag)
	NUMBER_LIST_TAG(int_list_tag, int_tag)
	NUMBER_LIST_TAG(long_list_tag, long_tag)
	NUMBER_LIST_TAG(float_list_tag, float_tag)
	NUMBER_LIST_TAG(double_list_tag, double_tag)

#	undef NUMBER_LIST_TAG

	template <typename T>
	struct array_list_tag final : public list_tag {
		typedef T tag_type;
		static_assert(std::is_base_of<tag, tag_type>::value);
		typedef typename T::value_type element_type;
		typedef std::vector<element_type> value_type;
		static constexpr tag_id eid = tag_type::tid;
		virtual tag_id element_id() const noexcept override {
			return eid;
		}
		value_type value;
		virtual size_t size() const noexcept override {
			return value.size();
		}
		virtual bool heavy() const noexcept override {
			return false;
		}
		virtual	std::unique_ptr<tag> operator[](size_t i) const override {
			return std::make_unique<tag_type>(value.at(i));
		}
		array_list_tag() = default;
		array_list_tag(const value_type & list) : value(list) {}
		array_list_tag(value_type && list) : value(std::move(list)) {}
		static std::unique_ptr<array_list_tag> read_content(std::istream & input) {
			return load_list<array_list_tag>(input, [&input] (const context & ctxt) -> element_type {
				return load_array<typename element_type::value_type>(input, ctxt);
			});
		}
		virtual void write(std::ostream & output) const override {
			dump_list(output, eid, value, [&output]
					(const element_type & element, const context & ctxt) {
				dump_array(output, element, ctxt);
			});
		}
		virtual std::unique_ptr<tag> copy() const override {
			return std::make_unique<array_list_tag>(*this);
		}
		virtual tag_list_tag as_tags() override {
			tag_list_tag result(eid);
			result.value.reserve(value.size());
			for (auto & each : value)
				result.value.push_back(std::make_unique<tag_type>(std::move(each)));
			value.clear();
			value.shrink_to_fit();
			return result;
		}
	};
#	define ARRAY_LIST_TAG(name, tag_type) \
		using name = array_list_tag<tag_type>; \
		FIND_LIST_TAG(name)
	
	ARRAY_LIST_TAG(bytearray_list_tag, bytearray_tag)
	ARRAY_LIST_TAG(intarray_list_tag, intarray_tag)
	ARRAY_LIST_TAG(longarray_list_tag, longarray_tag)

#	undef ARRAY_LIST_TAG

	struct string_list_tag final : public list_tag {
		typedef string_tag tag_type;
		typedef std::string element_type;
		typedef std::vector<element_type> value_type;
		static constexpr tag_id eid = tag_type::tid;
		virtual tag_id element_id() const noexcept override {
			return eid;
		}
		value_type value;
		virtual size_t size() const noexcept override {
			return value.size();
		}
		virtual bool heavy() const noexcept override {
			return false;
		}
		virtual	std::unique_ptr<tag> operator[](size_t i) const override;
		string_list_tag() = default;
		string_list_tag(const value_type & list);
		string_list_tag(value_type && list);
		static std::unique_ptr<string_list_tag> read_content(std::istream & input);
		virtual void write(std::ostream & output) const override;
		virtual std::unique_ptr<tag> copy() const override;
		virtual tag_list_tag as_tags() override;
	};

	FIND_LIST_TAG(string_list_tag)

	struct list_list_tag final : public list_tag {
		typedef list_tag tag_type;
		typedef std::unique_ptr<tag_type> element_type;
		typedef std::vector<element_type> value_type;
		static constexpr tag_id eid = tag_type::tid;
		virtual tag_id element_id() const noexcept override {
			return eid;
		}
		value_type value;
		virtual size_t size() const noexcept override {
			return value.size();
		}
		virtual bool heavy() const noexcept override {
			return false;
		}
		virtual	std::unique_ptr<tag> operator[](size_t i) const override;
		list_list_tag() = default;
		list_list_tag(const list_list_tag & other);
		list_list_tag(const value_type & list);
		list_list_tag(value_type && list);
		static std::unique_ptr<list_list_tag> read_content(std::istream & input);
		virtual void write(std::ostream & output) const override;
		virtual std::unique_ptr<tag> copy() const override;
		virtual tag_list_tag as_tags() override;
	};
	
	FIND_LIST_TAG(list_list_tag)

	struct compound_tag final : public tag {
		typedef std::map<std::string, std::unique_ptr<tag>> value_type;
		bool is_root = false;
		value_type value;
		static constexpr tag_id tid = tag_id::tag_compound;
		virtual tag_id id() const noexcept override {
			return tag_id::tag_compound;
		}
		compound_tag() = default;
		compound_tag(const compound_tag & other);
		explicit compound_tag(bool root);
		compound_tag(const value_type & map, bool root = false);
		compound_tag(value_type && map, bool root = false);
		static std::unique_ptr<compound_tag> read(std::istream & input);
		virtual void write(std::ostream & output) const override;
		virtual std::unique_ptr<tag> copy() const override;
		compound_tag & operator=(const compound_tag & other);
		void make_heavy();

		template <typename T>
		auto put(std::string && name, T && item) {
			return value.insert_or_assign(std::move(name), std::make_unique<tag_of<T>>(std::move(item)));
		}

		template <typename T>
		auto put(const std::string & name, T && item) {
			return value.insert_or_assign(name, std::make_unique<tag_of<T>>(item));
		}

		template <typename T>
		typename tag_of<T>::value_type & get(const std::string & name) {
			return dynamic_cast<tag_of<T> &>(*value.at(name)).value;
		}

		template <typename T>
		const typename tag_of<T>::value_type & get(const std::string & name) const {
			return dynamic_cast<const tag_of<T> &>(*value.at(name)).value;
		}

		template <typename T>
		typename tag_of<T>::value_type & tag(const std::string & name) {
			auto iter = value.find(name);
			if (iter == value.end()) {
				auto ptr = std::make_unique<tag_of<T>>();
				typename tag_of<T>::value_type & result = ptr->value;
				value.emplace(name, std::move(ptr));
				return result;
			} else {
				return dynamic_cast<tag_of<T> &>(*iter->second).value;
			}
		}

		bool erase(const std::string & name);
	};

	TAG_FIND(compound_tag)
	
	struct compound_list_tag final : public list_tag {
		typedef compound_tag tag_type;
		typedef tag_type element_type;
		typedef std::vector<element_type> value_type;
		static constexpr tag_id eid = tag_type::tid;
		virtual tag_id element_id() const noexcept override {
			return eid;
		}
		value_type value;
		virtual size_t size() const noexcept override {
			return value.size();
		}
		virtual bool heavy() const noexcept override {
			return false;
		}
		virtual	std::unique_ptr<tag> operator[](size_t i) const override;
		compound_list_tag() = default;
		compound_list_tag(const value_type & list);
		compound_list_tag(value_type && list);
		static std::unique_ptr<compound_list_tag> read_content(std::istream & input);
		virtual void write(std::ostream & output) const override;
		virtual std::unique_ptr<tag> copy() const override;
		virtual tag_list_tag as_tags() override;
	};

	FIND_LIST_TAG(compound_list_tag)

#	undef FIND_LIST_TAG
#	undef TAG_FIND


	template <typename T>
	tag_of<T> wrap(T && value) {
		return tag_of<T>(value);
	}

	template <tag_id tid>
	std::unique_ptr<tag> read(std::istream & input) {
		return tag_by<tid>::read(input);
	}

} // namespace tags

std::istream & operator>>(std::istream & input, tags::compound_tag & compound);
std::ostream & operator<<(std::ostream & output, const tags::tag & tag);

template <typename number_t>
std::vector<number_t> load_array_text(std::istream & input) {
	std::vector<number_t> result;
	skip_space(input);
	char a = cheof(input);
	if (a != '[')
		throw std::runtime_error("failed to open array tag");
	a = cheof(input);
	if (a != tags::tag_of<std::vector<number_t>>::prefix)
		throw std::runtime_error("wrong array tag type");
	a = cheof(input);
	if (a != ';')
		throw std::runtime_error("unexpected symbol in array tag");
	
	scan_sequence_text(input, [&] {
		result.push_back(load_text<number_t>(input));
	});
	result.shrink_to_fit();
	return result;
}

template <typename number_t>
void dump_array_text(std::ostream & output, const std::vector<number_t> & array) {
	output << '[' << tags::tag_of<std::vector<number_t>>::prefix << ';';
	auto iter = array.cbegin();
	auto end = array.cend();
	if (iter == end) {
        output << ']';
        return;
	}
	dump_text(output, *iter);
	for (++iter; iter != end; ++iter) {
		output << ',';
		dump_text(output, *iter);
	}
	output << ']';
}

} // namespace nbt

namespace std {

string to_string(const nbt::tags::tag & tag);

} // namespace std

#endif // NBT_HEAD_BNTYGTFREQXCPVMFFG
