/*
 *  Chocobo1/Hash
 *
 *   Copyright 2018 by Mike Tzou (Chocobo1)
 *     https://github.com/Chocobo1/Hash
 *
 *   Licensed under GNU General Public License 3 or later.
 *
 *  @license GPL3 <https://www.gnu.org/licenses/gpl-3.0-standalone.html>
 */

#ifndef CHOCOBO1_SM3_H
#define CHOCOBO1_SM3_H

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
	// SM3();
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


namespace SM3_NS
{
	class SM3
	{
		// https://tools.ietf.org/html/draft-sca-cfrg-sm3-02

		public:
			using Byte = uint8_t;
			using ResultArrayType = std::array<Byte, 32>;

#if (USE_STD_SPAN_CHOCOBO1_HASH == 1)
			template <typename T, std::size_t Extent = std::dynamic_extent>
			using Span = std::span<T, Extent>;
#else
			template <typename T, std::size_t Extent = gsl::dynamic_extent>
			using Span = gsl::span<T, Extent>;
#endif


			constexpr SM3();

			constexpr void reset();
			CONSTEXPR_CPP17_CHOCOBO1_HASH SM3& finalize();  // after this, only `toArray()`, `toString()`, `toVector()`, `reset()` are available

			std::string toString() const;
			std::vector<Byte> toVector() const;
			CONSTEXPR_CPP17_CHOCOBO1_HASH ResultArrayType toArray() const;

			CONSTEXPR_CPP17_CHOCOBO1_HASH SM3& addData(const Span<const Byte> inData);
			CONSTEXPR_CPP17_CHOCOBO1_HASH SM3& addData(const void *ptr, const std::size_t length);
			template <std::size_t N>
			CONSTEXPR_CPP17_CHOCOBO1_HASH SM3& addData(const Byte (&array)[N]);
			template <typename T, std::size_t N>
			SM3& addData(const T (&array)[N]);
			template <typename T>
			SM3& addData(const Span<T> inSpan);

		private:
			CONSTEXPR_CPP17_CHOCOBO1_HASH void addDataImpl(const Span<const Byte> data);

			static constexpr int BLOCK_SIZE = 64;

			Buffer<Byte, (BLOCK_SIZE * 2)> m_buffer;  // x2 for paddings
			uint64_t m_sizeCounter = 0;

			uint32_t m_v[8] = {};
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
				return  ( (static_cast<T>(*(ptr + 0)) << 24)
						| (static_cast<T>(*(ptr + 1)) << 16)
						| (static_cast<T>(*(ptr + 2)) <<  8)
						| (static_cast<T>(*(ptr + 3)) <<  0));
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


	//
	constexpr SM3::SM3()
	{
		static_assert((CHAR_BIT == 8), "Sorry, we don't support exotic CPUs");
		reset();
	}

	constexpr void SM3::reset()
	{
		m_buffer.clear();
		m_sizeCounter = 0;

		m_v[0] = 0x7380166f;
		m_v[1] = 0x4914b2b9;
		m_v[2] = 0x172442d7;
		m_v[3] = 0xda8a0600;
		m_v[4] = 0xa96f30bc;
		m_v[5] = 0x163138aa;
		m_v[6] = 0xe38dee4d;
		m_v[7] = 0xb0fb0e4e;
	}

	CONSTEXPR_CPP17_CHOCOBO1_HASH SM3& SM3::finalize()
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
			m_buffer[m_buffer.size() - 8 + i] = ror<Byte>(sizeCounterBitsH, (8 * (3 - i)));
			m_buffer[m_buffer.size() - 4 + i] = ror<Byte>(sizeCounterBitsL, (8 * (3 - i)));
		}

		addDataImpl({m_buffer.data(), m_buffer.size()});
		m_buffer.clear();

		return (*this);
	}

	std::string SM3::toString() const
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

	std::vector<SM3::Byte> SM3::toVector() const
	{
		const auto a = toArray();
		return {a.begin(), a.end()};
	}

	CONSTEXPR_CPP17_CHOCOBO1_HASH SM3::ResultArrayType SM3::toArray() const
	{
		const Span<const uint32_t> state(m_v);
		const int dataSize = sizeof(decltype(state)::value_type);

		ResultArrayType ret {};
		auto retPtr = ret.data();
		for (const auto i : state)
		{
			for (int j = (dataSize - 1); j >= 0; --j)
				*(retPtr++) = ror<Byte>(i, (j * 8));
		}

		return ret;
	}

	CONSTEXPR_CPP17_CHOCOBO1_HASH SM3& SM3::addData(const Span<const Byte> inData)
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

	CONSTEXPR_CPP17_CHOCOBO1_HASH SM3& SM3::addData(const void *ptr, const std::size_t length)
	{
		// Span::size_type = std::size_t
		return addData({static_cast<const Byte*>(ptr), length});
	}

	template <std::size_t N>
	CONSTEXPR_CPP17_CHOCOBO1_HASH SM3& SM3::addData(const Byte (&array)[N])
	{
		return addData({array, N});
	}

	template <typename T, std::size_t N>
	SM3& SM3::addData(const T (&array)[N])
	{
		return addData({reinterpret_cast<const Byte*>(array), (sizeof(T) * N)});
	}

	template <typename T>
	SM3& SM3::addData(const Span<T> inSpan)
	{
		return addData({reinterpret_cast<const Byte*>(inSpan.data()), inSpan.size_bytes()});
	}

	CONSTEXPR_CPP17_CHOCOBO1_HASH void SM3::addDataImpl(const Span<const Byte> data)
	{
		assert((data.size() % BLOCK_SIZE) == 0);

		m_sizeCounter += data.size();

		for (size_t i = 0, iend = static_cast<size_t>(data.size() / BLOCK_SIZE); i < iend; ++i)
		{
			const Loader<uint32_t> m(static_cast<const Byte *>(data.data() + (i * BLOCK_SIZE)));

			const auto permutation1 = [](const uint32_t x) -> uint32_t
			{
				return x ^ rotl(x, 15) ^ rotl(x, 23);
			};

			uint32_t expanedMsg[68] {};
			for (int t = 0; t < 16; ++t)
				expanedMsg[t] = m[t];
			for (int t = 16; t < 68; ++t)
			{
				expanedMsg[t] = permutation1(rotl(expanedMsg[t - 3], 15) ^ expanedMsg[t - 9] ^ expanedMsg[t - 16]) ^
					rotl(expanedMsg[t - 13], 7) ^ expanedMsg[t - 6];
			}

			uint32_t a = m_v[0];
			uint32_t b = m_v[1];
			uint32_t c = m_v[2];
			uint32_t d = m_v[3];
			uint32_t e = m_v[4];
			uint32_t f = m_v[5];
			uint32_t g = m_v[6];
			uint32_t h = m_v[7];

			const auto permutation0 = [](const uint32_t x) -> uint32_t
			{
				return x ^ rotl(x, 9) ^ rotl(x, 17);
			};
			const auto sm3Round1 = [permutation0, &expanedMsg](const uint32_t a, uint32_t &b, const uint32_t c, uint32_t &d, const uint32_t e, uint32_t &f, const uint32_t g, uint32_t &h, const uint32_t tTable, const unsigned int t) -> void
			{
				const uint32_t wPrime = expanedMsg[t] ^ expanedMsg[t + 4];
				const uint32_t tmpA = rotl(a, 12);

				const uint32_t ss1 = rotl((tmpA + e + tTable), 7);
				const uint32_t ss2 = ss1 ^ tmpA;
				const uint32_t tt1 = (a ^ b ^ c) + d + ss2 + wPrime;
				const uint32_t tt2 = (e ^ f ^ g) + h + ss1 + expanedMsg[t];

				b = rotl(b, 9);
				d = tt1;
				f = rotl(f, 19);
				h = permutation0(tt2);
			};
			sm3Round1(a, b, c, d, e, f, g, h, 0x79cc4519, 0);
			sm3Round1(d, a, b, c, h, e, f, g, 0xf3988a32, 1);
			sm3Round1(c, d, a, b, g, h, e, f, 0xe7311465, 2);
			sm3Round1(b, c, d, a, f, g, h, e, 0xce6228cb, 3);
			sm3Round1(a, b, c, d, e, f, g, h, 0x9cc45197, 4);
			sm3Round1(d, a, b, c, h, e, f, g, 0x3988a32f, 5);
			sm3Round1(c, d, a, b, g, h, e, f, 0x7311465e, 6);
			sm3Round1(b, c, d, a, f, g, h, e, 0xe6228cbc, 7);
			sm3Round1(a, b, c, d, e, f, g, h, 0xcc451979, 8);
			sm3Round1(d, a, b, c, h, e, f, g, 0x988a32f3, 9);
			sm3Round1(c, d, a, b, g, h, e, f, 0x311465e7, 10);
			sm3Round1(b, c, d, a, f, g, h, e, 0x6228cbce, 11);
			sm3Round1(a, b, c, d, e, f, g, h, 0xc451979c, 12);
			sm3Round1(d, a, b, c, h, e, f, g, 0x88a32f39, 13);
			sm3Round1(c, d, a, b, g, h, e, f, 0x11465e73, 14);
			sm3Round1(b, c, d, a, f, g, h, e, 0x228cbce6, 15);

			const auto sm3Round2 = [permutation0, &expanedMsg](const uint32_t a, uint32_t &b, const uint32_t c, uint32_t &d, const uint32_t e, uint32_t &f, const uint32_t g, uint32_t &h, const uint32_t tTable, const unsigned int t) -> void
			{
				const uint32_t wPrime = expanedMsg[t] ^ expanedMsg[t + 4];
				const uint32_t tmpA = rotl(a, 12);

				const uint32_t ss1 = rotl((tmpA + e + tTable), 7);
				const uint32_t ss2 = ss1 ^ tmpA;
				const uint32_t tt1 = ((a & b) | (c & (a | b))) + d + ss2 + wPrime;  // alternative
				const uint32_t tt2 = (g ^ (e & (f ^ g))) + h + ss1 + expanedMsg[t];  // alternative

				b = rotl(b, 9);
				d = tt1;
				f = rotl(f, 19);
				h = permutation0(tt2);
			};
			sm3Round2(a, b, c, d, e, f, g, h, 0x9d8a7a87, 16);
			sm3Round2(d, a, b, c, h, e, f, g, 0x3b14f50f, 17);
			sm3Round2(c, d, a, b, g, h, e, f, 0x7629ea1e, 18);
			sm3Round2(b, c, d, a, f, g, h, e, 0xec53d43c, 19);
			sm3Round2(a, b, c, d, e, f, g, h, 0xd8a7a879, 20);
			sm3Round2(d, a, b, c, h, e, f, g, 0xb14f50f3, 21);
			sm3Round2(c, d, a, b, g, h, e, f, 0x629ea1e7, 22);
			sm3Round2(b, c, d, a, f, g, h, e, 0xc53d43ce, 23);
			sm3Round2(a, b, c, d, e, f, g, h, 0x8a7a879d, 24);
			sm3Round2(d, a, b, c, h, e, f, g, 0x14f50f3b, 25);
			sm3Round2(c, d, a, b, g, h, e, f, 0x29ea1e76, 26);
			sm3Round2(b, c, d, a, f, g, h, e, 0x53d43cec, 27);
			sm3Round2(a, b, c, d, e, f, g, h, 0xa7a879d8, 28);
			sm3Round2(d, a, b, c, h, e, f, g, 0x4f50f3b1, 29);
			sm3Round2(c, d, a, b, g, h, e, f, 0x9ea1e762, 30);
			sm3Round2(b, c, d, a, f, g, h, e, 0x3d43cec5, 31);
			sm3Round2(a, b, c, d, e, f, g, h, 0x7a879d8a, 32);
			sm3Round2(d, a, b, c, h, e, f, g, 0xf50f3b14, 33);
			sm3Round2(c, d, a, b, g, h, e, f, 0xea1e7629, 34);
			sm3Round2(b, c, d, a, f, g, h, e, 0xd43cec53, 35);
			sm3Round2(a, b, c, d, e, f, g, h, 0xa879d8a7, 36);
			sm3Round2(d, a, b, c, h, e, f, g, 0x50f3b14f, 37);
			sm3Round2(c, d, a, b, g, h, e, f, 0xa1e7629e, 38);
			sm3Round2(b, c, d, a, f, g, h, e, 0x43cec53d, 39);
			sm3Round2(a, b, c, d, e, f, g, h, 0x879d8a7a, 40);
			sm3Round2(d, a, b, c, h, e, f, g, 0x0f3b14f5, 41);
			sm3Round2(c, d, a, b, g, h, e, f, 0x1e7629ea, 42);
			sm3Round2(b, c, d, a, f, g, h, e, 0x3cec53d4, 43);
			sm3Round2(a, b, c, d, e, f, g, h, 0x79d8a7a8, 44);
			sm3Round2(d, a, b, c, h, e, f, g, 0xf3b14f50, 45);
			sm3Round2(c, d, a, b, g, h, e, f, 0xe7629ea1, 46);
			sm3Round2(b, c, d, a, f, g, h, e, 0xcec53d43, 47);
			sm3Round2(a, b, c, d, e, f, g, h, 0x9d8a7a87, 48);
			sm3Round2(d, a, b, c, h, e, f, g, 0x3b14f50f, 49);
			sm3Round2(c, d, a, b, g, h, e, f, 0x7629ea1e, 50);
			sm3Round2(b, c, d, a, f, g, h, e, 0xec53d43c, 51);
			sm3Round2(a, b, c, d, e, f, g, h, 0xd8a7a879, 52);
			sm3Round2(d, a, b, c, h, e, f, g, 0xb14f50f3, 53);
			sm3Round2(c, d, a, b, g, h, e, f, 0x629ea1e7, 54);
			sm3Round2(b, c, d, a, f, g, h, e, 0xc53d43ce, 55);
			sm3Round2(a, b, c, d, e, f, g, h, 0x8a7a879d, 56);
			sm3Round2(d, a, b, c, h, e, f, g, 0x14f50f3b, 57);
			sm3Round2(c, d, a, b, g, h, e, f, 0x29ea1e76, 58);
			sm3Round2(b, c, d, a, f, g, h, e, 0x53d43cec, 59);
			sm3Round2(a, b, c, d, e, f, g, h, 0xa7a879d8, 60);
			sm3Round2(d, a, b, c, h, e, f, g, 0x4f50f3b1, 61);
			sm3Round2(c, d, a, b, g, h, e, f, 0x9ea1e762, 62);
			sm3Round2(b, c, d, a, f, g, h, e, 0x3d43cec5, 63);

			m_v[0] ^= a;
			m_v[1] ^= b;
			m_v[2] ^= c;
			m_v[3] ^= d;
			m_v[4] ^= e;
			m_v[5] ^= f;
			m_v[6] ^= g;
			m_v[7] ^= h;
		}
	}
}
}
	using SM3 = Hash::SM3_NS::SM3;
}

#endif  // CHOCOBO1_SM3_H
