/*
 *  Chocobo1/Hash
 *
 *   Copyright 2017-2020 by Mike Tzou (Chocobo1)
 *     https://github.com/Chocobo1/Hash
 *
 *   Licensed under GNU General Public License 3 or later.
 *
 *  @license GPL3 <https://www.gnu.org/licenses/gpl-3.0-standalone.html>
 */

#ifndef CHOCOBO1_MD5_H
#define CHOCOBO1_MD5_H

#include <array>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdint>
#include <initializer_list>
#include <string>
#include <type_traits>
#include <vector>

#if (__cplusplus > 201703L)
#include <version>
#endif

#ifndef USE_STD_SPAN_CHOCOBO1_HASH
#if (__cpp_lib_span >= 202002L)
#define USE_STD_SPAN_CHOCOBO1_HASH 1
#else
#define USE_STD_SPAN_CHOCOBO1_HASH 0
#endif
#endif

#if (USE_STD_SPAN_CHOCOBO1_HASH == 1)
#include <span>
#else
#include "gsl/span"
#endif


namespace Chocobo1
{
	// Use these!!
	// MD5();
}


namespace Chocobo1
{
// users should ignore things in this namespace

namespace Hash
{
#ifndef CONSTEXPR_CPP17_CHOCOBO1_HASH
#if __cplusplus >= 201703L
#define CONSTEXPR_CPP17_CHOCOBO1_HASH constexpr
#else
#define CONSTEXPR_CPP17_CHOCOBO1_HASH
#endif
#endif

#if (USE_STD_SPAN_CHOCOBO1_HASH == 1)
	using IndexType = std::size_t;
#else
	using IndexType = gsl::index;
#endif

#ifndef CHOCOBO1_HASH_BUFFER_IMPL
#define CHOCOBO1_HASH_BUFFER_IMPL
	template <typename T, IndexType N>
	class Buffer
	{
		public:
			using value_type = T;
			using index_type = IndexType;
			using size_type = std::size_t;

			constexpr Buffer() = default;
			constexpr Buffer(const Buffer &) = default;

			CONSTEXPR_CPP17_CHOCOBO1_HASH Buffer(const std::initializer_list<T> initList)
			{
#if !defined(NDEBUG)
				// check if out-of-bounds
				static_cast<void>(m_array.at(m_dataEndIdx + initList.size() - 1));
#endif

				for (const auto &i : initList)
				{
					m_array[m_dataEndIdx] = i;
					++m_dataEndIdx;
				}
			}

			template <typename InputIt>
			constexpr Buffer(const InputIt first, const InputIt last)
			{
				for (InputIt iter = first; iter != last; ++iter)
				{
					this->fill(*iter);
				}
			}

			constexpr T& operator[](const index_type pos)
			{
				return m_array[pos];
			}

			constexpr T operator[](const index_type pos) const
			{
				return m_array[pos];
			}

			CONSTEXPR_CPP17_CHOCOBO1_HASH void fill(const T &value, const index_type count = 1)
			{
#if !defined(NDEBUG)
				// check if out-of-bounds
				static_cast<void>(m_array.at(m_dataEndIdx + count - 1));
#endif

				for (index_type i = 0; i < count; ++i)
				{
					m_array[m_dataEndIdx] = value;
					++m_dataEndIdx;
				}
			}

			template <typename InputIt>
			constexpr void push_back(const InputIt first, const InputIt last)
			{
				for (InputIt iter = first; iter != last; ++iter)
				{
					this->fill(*iter);
				}
			}

			constexpr void clear()
			{
				m_array = {};
				m_dataEndIdx = 0;
			}

			constexpr bool empty() const
			{
				return (m_dataEndIdx == 0);
			}

			constexpr size_type size() const
			{
				return m_dataEndIdx;
			}

			constexpr const T* data() const
			{
				return m_array.data();
			}

		private:
			std::array<T, N> m_array {};
			index_type m_dataEndIdx = 0;
	};
#endif


namespace MD5_NS
{
	class MD5
	{
		// https://tools.ietf.org/html/rfc1321

		public:
			using Byte = uint8_t;
			using ResultArrayType = std::array<Byte, 16>;

#if (USE_STD_SPAN_CHOCOBO1_HASH == 1)
			template <typename T, std::size_t Extent = std::dynamic_extent>
			using Span = std::span<T, Extent>;
#else
			template <typename T, std::size_t Extent = gsl::dynamic_extent>
			using Span = gsl::span<T, Extent>;
#endif


			constexpr MD5();

			constexpr void reset();
			CONSTEXPR_CPP17_CHOCOBO1_HASH MD5& finalize();  // after this, only `toArray()`, `toString()`, `toVector()`, `reset()` are available

			std::string toString() const;
			std::vector<Byte> toVector() const;
			CONSTEXPR_CPP17_CHOCOBO1_HASH ResultArrayType toArray() const;

			CONSTEXPR_CPP17_CHOCOBO1_HASH MD5& addData(const Span<const Byte> inData);
			CONSTEXPR_CPP17_CHOCOBO1_HASH MD5& addData(const void *ptr, const std::size_t length);
			template <std::size_t N>
			CONSTEXPR_CPP17_CHOCOBO1_HASH MD5& addData(const Byte (&array)[N]);
			template <typename T, std::size_t N>
			MD5& addData(const T (&array)[N]);
			template <typename T>
			MD5& addData(const Span<T> inSpan);

		private:
			CONSTEXPR_CPP17_CHOCOBO1_HASH void addDataImpl(const Span<const Byte> data);

			static constexpr int BLOCK_SIZE = 64;

			Buffer<Byte, (BLOCK_SIZE * 2)> m_buffer;  // x2 for paddings
			uint64_t m_sizeCounter = 0;

			uint32_t m_state[4] = {};
	};


	// helpers
	template <typename T>
	class Loader
	{
		// this class workaround loading data from unaligned memory boundaries
		// also eliminate endianness issues
		public:
			explicit constexpr Loader(const uint8_t *ptr)
				: m_ptr(ptr)
			{
			}

			constexpr T operator[](const IndexType idx) const
			{
				static_assert(std::is_same<T, uint32_t>::value, "");
				// handle specific endianness here
				const uint8_t *ptr = m_ptr + (sizeof(T) * idx);
				return  ( (static_cast<T>(*(ptr + 0)) <<  0)
						| (static_cast<T>(*(ptr + 1)) <<  8)
						| (static_cast<T>(*(ptr + 2)) << 16)
						| (static_cast<T>(*(ptr + 3)) << 24));
			}

		private:
			const uint8_t *m_ptr;
	};

	template <typename R, typename T>
	constexpr R ror(const T x, const unsigned int s)
	{
		static_assert(std::is_unsigned<R>::value, "");
		static_assert(std::is_unsigned<T>::value, "");
		return static_cast<R>(x >> s);
	}

	template <typename T>
	constexpr T rotl(const T x, const unsigned int s)
	{
		static_assert(std::is_unsigned<T>::value, "");
		if (s == 0)
			return x;
		return ((x << s) | (x >> ((sizeof(T) * 8) - s)));
	}

	template<int i>
	constexpr uint32_t t()
	{
		return (fabs(sin(i + 1)) * 4294967296);
	}


	//
	constexpr MD5::MD5()
	{
		static_assert((CHAR_BIT == 8), "Sorry, we don't support exotic CPUs");
		reset();
	}

	constexpr void MD5::reset()
	{
		m_buffer.clear();
		m_sizeCounter = 0;

		m_state[0] = 0x67452301;
		m_state[1] = 0xefcdab89;
		m_state[2] = 0x98badcfe;
		m_state[3] = 0x10325476;
	}

	CONSTEXPR_CPP17_CHOCOBO1_HASH MD5& MD5::finalize()
	{
		m_sizeCounter += m_buffer.size();

		// append 1 bit
		m_buffer.fill(1 << 7);

		// append paddings
		const auto len = static_cast<int>(((2 * BLOCK_SIZE) - (m_buffer.size() + 8)) % BLOCK_SIZE);
		m_buffer.fill(0, (len + 8));

		// append size in bits
		const uint64_t sizeCounterBits = m_sizeCounter * 8;
		const uint32_t sizeCounterBitsL = ror<uint32_t>(sizeCounterBits, 0);
		const uint32_t sizeCounterBitsH = ror<uint32_t>(sizeCounterBits, 32);
		for (int i = 0; i < 4; ++i)
		{
			m_buffer[m_buffer.size() - 8 + i] = ror<Byte>(sizeCounterBitsL, (8 * i));
			m_buffer[m_buffer.size() - 4 + i] = ror<Byte>(sizeCounterBitsH, (8 * i));
		}

		addDataImpl({m_buffer.data(), m_buffer.size()});
		m_buffer.clear();

		return (*this);
	}

	std::string MD5::toString() const
	{
		const auto a = toArray();
		std::string ret;
		ret.resize(2 * a.size());

		auto retPtr = &ret.front();
		for (const auto c : a)
		{
			const Byte upper = ror<Byte>(c, 4);
			*(retPtr++) = static_cast<char>((upper < 10) ? (upper + '0') : (upper - 10 + 'a'));

			const Byte lower = c & 0xf;
			*(retPtr++) = static_cast<char>((lower < 10) ? (lower + '0') : (lower - 10 + 'a'));
		}

		return ret;
	}

	std::vector<MD5::Byte> MD5::toVector() const
	{
		const auto a = toArray();
		return {a.begin(), a.end()};
	}

	CONSTEXPR_CPP17_CHOCOBO1_HASH MD5::ResultArrayType MD5::toArray() const
	{
		const Span<const uint32_t> state(m_state);
		const int dataSize = sizeof(decltype(state)::value_type);

		ResultArrayType ret {};
		auto retPtr = ret.data();
		for (const auto i : state)
		{
			for (int j = 0; j < dataSize; ++j)
				*(retPtr++) = ror<Byte>(i, (j * 8));
		}

		return ret;
	}

	CONSTEXPR_CPP17_CHOCOBO1_HASH MD5& MD5::addData(const Span<const Byte> inData)
	{
		Span<const Byte> data = inData;

		if (!m_buffer.empty())
		{
			const size_t len = std::min<size_t>((BLOCK_SIZE - m_buffer.size()), data.size());  // try fill to BLOCK_SIZE bytes
			m_buffer.push_back(data.begin(), (data.begin() + len));

			if (m_buffer.size() < BLOCK_SIZE)  // still doesn't fill the buffer
				return (*this);

			addDataImpl({m_buffer.data(), m_buffer.size()});
			m_buffer.clear();

			data = data.subspan(len);
		}

		const size_t dataSize = data.size();
		if (dataSize < BLOCK_SIZE)
		{
			m_buffer = {data.begin(), data.end()};
			return (*this);
		}

		const size_t len = dataSize - (dataSize % BLOCK_SIZE);  // align on BLOCK_SIZE bytes
		addDataImpl(data.first(len));

		if (len < dataSize)  // didn't consume all data
			m_buffer = {(data.begin() + len), data.end()};

		return (*this);
	}

	CONSTEXPR_CPP17_CHOCOBO1_HASH MD5& MD5::addData(const void *ptr, const std::size_t length)
	{
		// Span::size_type = std::size_t
		return addData({static_cast<const Byte*>(ptr), length});
	}

	template <std::size_t N>
	CONSTEXPR_CPP17_CHOCOBO1_HASH MD5& MD5::addData(const Byte (&array)[N])
	{
		return addData({array, N});
	}

	template <typename T, std::size_t N>
	MD5& MD5::addData(const T (&array)[N])
	{
		return addData({reinterpret_cast<const Byte*>(array), (sizeof(T) * N)});
	}

	template <typename T>
	MD5& MD5::addData(const Span<T> inSpan)
	{
		return addData({reinterpret_cast<const Byte*>(inSpan.data()), inSpan.size_bytes()});
	}

	CONSTEXPR_CPP17_CHOCOBO1_HASH void MD5::addDataImpl(const Span<const Byte> data)
	{
		assert((data.size() % BLOCK_SIZE) == 0);

		m_sizeCounter += data.size();

		for (size_t i = 0, iend = static_cast<size_t>(data.size() / BLOCK_SIZE); i < iend; ++i)
		{
			const Loader<uint32_t> x(static_cast<const Byte *>(data.data() + (i * BLOCK_SIZE)));

			const auto f = [](const uint32_t x, const uint32_t y, const uint32_t z) -> uint32_t
			{
				return ((x & (y ^ z)) ^ z);  // alternative
			};
			const auto g = [](const uint32_t x, const uint32_t y, const uint32_t z) -> uint32_t
			{
				return (y ^ ((x ^ y) & z));  // alternative
			};
			const auto h = [](const uint32_t x, const uint32_t y, const uint32_t z) -> uint32_t
			{
				return (x ^ y ^ z);
			};
			const auto ii = [](const uint32_t x, const uint32_t y, const uint32_t z) -> uint32_t
			{
				return (y ^ (x | (~z)));
			};

			uint32_t a = m_state[0];
			uint32_t b = m_state[1];
			uint32_t c = m_state[2];
			uint32_t d = m_state[3];

			const auto round = [x](uint32_t &a, uint32_t &b, uint32_t &c, uint32_t &d, const auto &func, const unsigned int k, const unsigned int s, const uint32_t t) -> void
			{
				a = b + rotl((a + func(b, c, d) + x[k] + t), s);
			};

			round(a, b, c, d, f, 0, 7, 0xd76aa478);
			round(d, a, b, c, f, 1, 12, 0xe8c7b756);
			round(c, d, a, b, f, 2, 17, 0x242070db);
			round(b, c, d, a, f, 3, 22, 0xc1bdceee);
			round(a, b, c, d, f, 4, 7, 0xf57c0faf);
			round(d, a, b, c, f, 5, 12, 0x4787c62a);
			round(c, d, a, b, f, 6, 17, 0xa8304613);
			round(b, c, d, a, f, 7, 22, 0xfd469501);
			round(a, b, c, d, f, 8, 7, 0x698098d8);
			round(d, a, b, c, f, 9, 12, 0x8b44f7af);
			round(c, d, a, b, f, 10, 17, 0xffff5bb1);
			round(b, c, d, a, f, 11, 22, 0x895cd7be);
			round(a, b, c, d, f, 12, 7, 0x6b901122);
			round(d, a, b, c, f, 13, 12, 0xfd987193);
			round(c, d, a, b, f, 14, 17, 0xa679438e);
			round(b, c, d, a, f, 15, 22, 0x49b40821);

			round(a, b, c, d, g, 1, 5, 0xf61e2562);
			round(d, a, b, c, g, 6, 9, 0xc040b340);
			round(c, d, a, b, g, 11, 14, 0x265e5a51);
			round(b, c, d, a, g, 0, 20, 0xe9b6c7aa);
			round(a, b, c, d, g, 5, 5, 0xd62f105d);
			round(d, a, b, c, g, 10, 9, 0x02441453);
			round(c, d, a, b, g, 15, 14, 0xd8a1e681);
			round(b, c, d, a, g, 4, 20, 0xe7d3fbc8);
			round(a, b, c, d, g, 9, 5, 0x21e1cde6);
			round(d, a, b, c, g, 14, 9, 0xc33707d6);
			round(c, d, a, b, g, 3, 14, 0xf4d50d87);
			round(b, c, d, a, g, 8, 20, 0x455a14ed);
			round(a, b, c, d, g, 13, 5, 0xa9e3e905);
			round(d, a, b, c, g, 2, 9, 0xfcefa3f8);
			round(c, d, a, b, g, 7, 14, 0x676f02d9);
			round(b, c, d, a, g, 12, 20, 0x8d2a4c8a);

			round(a, b, c, d, h, 5, 4, 0xfffa3942);
			round(d, a, b, c, h, 8, 11, 0x8771f681);
			round(c, d, a, b, h, 11, 16, 0x6d9d6122);
			round(b, c, d, a, h, 14, 23, 0xfde5380c);
			round(a, b, c, d, h, 1, 4, 0xa4beea44);
			round(d, a, b, c, h, 4, 11, 0x4bdecfa9);
			round(c, d, a, b, h, 7, 16, 0xf6bb4b60);
			round(b, c, d, a, h, 10, 23, 0xbebfbc70);
			round(a, b, c, d, h, 13, 4, 0x289b7ec6);
			round(d, a, b, c, h, 0, 11, 0xeaa127fa);
			round(c, d, a, b, h, 3, 16, 0xd4ef3085);
			round(b, c, d, a, h, 6, 23, 0x04881d05);
			round(a, b, c, d, h, 9, 4, 0xd9d4d039);
			round(d, a, b, c, h, 12, 11, 0xe6db99e5);
			round(c, d, a, b, h, 15, 16, 0x1fa27cf8);
			round(b, c, d, a, h, 2, 23, 0xc4ac5665);

			round(a, b, c, d, ii, 0, 6, 0xf4292244);
			round(d, a, b, c, ii, 7, 10, 0x432aff97);
			round(c, d, a, b, ii, 14, 15, 0xab9423a7);
			round(b, c, d, a, ii, 5, 21, 0xfc93a039);
			round(a, b, c, d, ii, 12, 6, 0x655b59c3);
			round(d, a, b, c, ii, 3, 10, 0x8f0ccc92);
			round(c, d, a, b, ii, 10, 15, 0xffeff47d);
			round(b, c, d, a, ii, 1, 21, 0x85845dd1);
			round(a, b, c, d, ii, 8, 6, 0x6fa87e4f);
			round(d, a, b, c, ii, 15, 10, 0xfe2ce6e0);
			round(c, d, a, b, ii, 6, 15, 0xa3014314);
			round(b, c, d, a, ii, 13, 21, 0x4e0811a1);
			round(a, b, c, d, ii, 4, 6, 0xf7537e82);
			round(d, a, b, c, ii, 11, 10, 0xbd3af235);
			round(c, d, a, b, ii, 2, 15, 0x2ad7d2bb);
			round(b, c, d, a, ii, 9, 21, 0xeb86d391);

			m_state[0] += a;
			m_state[1] += b;
			m_state[2] += c;
			m_state[3] += d;
		}
	}
}
}
	using MD5 = Hash::MD5_NS::MD5;
}

#endif  // CHOCOBO1_MD5_H
