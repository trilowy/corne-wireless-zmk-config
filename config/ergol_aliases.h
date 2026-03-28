#include <dt-bindings/zmk/keys.h>

/*
 * Base
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ / │ = │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ C │ O │ P │ W │ J │ M │ D │ ★ │ Y │ [ │ ] │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ E │ N │ F │ L │ R │ T │ I │ U │ ' │ \ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Z │ X │ - │ V │ B │ . │ H │ G │ , │ K │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

#define EL_GRV  GRAVE         // `
#define EL_1    NUMBER_1      // 1
#define EL_2    NUMBER_2      // 2
#define EL_3    NUMBER_3      // 3
#define EL_4    NUMBER_4      // 4
#define EL_5    NUMBER_5      // 5
#define EL_6    NUMBER_6      // 6
#define EL_7    NUMBER_7      // 7
#define EL_8    NUMBER_8      // 8
#define EL_9    NUMBER_9      // 9
#define EL_0    NUMBER_0      // 0
#define EL_SLSH MINUS         // /
#define EL_EQL  EQUAL         // =

#define EL_Q    Q             // Q
#define EL_C    W             // C
#define EL_O    E             // O
#define EL_P    R             // P
#define EL_W    T             // W
#define EL_J    Y             // J
#define EL_M    U             // M
#define EL_D    I             // D
#define EL_1DK  O             // ★ (one dead key)
#define EL_Y    P             // Y
#define EL_LBRC LEFT_BRACKET  // [
#define EL_RBRC RIGHT_BRACKET // ]

#define EL_A    A             // A
#define EL_S    S             // S
#define EL_E    D             // E
#define EL_N    F             // N
#define EL_F    G             // F
#define EL_L    H             // L
#define EL_R    J             // R
#define EL_T    K             // T
#define EL_I    L             // I
#define EL_U    SEMICOLON     // U
#define EL_QUOT SINGLE_QUOTE  // '
#define EL_BSLS BACKSLASH     // (backslash)

#define EL_LABK NUBS          // <
#define EL_Z    Z             // Z
#define EL_X    X             // X
#define EL_MINS C             // -
#define EL_V    V             // V
#define EL_B    B             // B
#define EL_DOT  N             // .
#define EL_H    M             // H
#define EL_G    COMMA         // G
#define EL_COMM DOT           // ,
#define EL_K    SLASH         // K

/*
 * Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ~ │ € │ « │ » │ $ │ % │ ^ │ & │ * │ # │ @ │ _ │ + │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │ ! │   │ { │ } │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │ " │ | │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │ ? │   │   │ : │   │   │ ; │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

#define EL_TILD LS(EL_GRV)  // ~
#define EL_EURO LS(EL_1)    // €
#define EL_LDAQ LS(EL_2)    // «
#define EL_RDAQ LS(EL_3)    // »
#define EL_DLR  LS(EL_4)    // $
#define EL_PERC LS(EL_5)    // %
#define EL_CIRC LS(EL_6)    // ^
#define EL_AMPR LS(EL_7)    // &
#define EL_ASTR LS(EL_8)    // *
#define EL_HASH LS(EL_9)    // #
#define EL_AT   LS(EL_0)    // @
#define EL_UNDS LS(EL_SLSH) // _
#define EL_PLUS LS(EL_EQL)  // +

#define EL_EXLM LS(EL_1DK)  // !
#define EL_LCBR LS(EL_LBRC) // {
#define EL_RCBR LS(EL_RBRC) // }

#define EL_DQUO LS(EL_QUOT) // "
#define EL_PIPE LS(EL_BSLS) // |

#define EL_RABK LS(EL_LABK) // >
#define EL_QUES LS(EL_MINS) // ?
#define EL_COLN LS(EL_DOT)  // :
#define EL_SCLN LS(EL_COMM) // ;

#define EL_NNBS LS(SPACE)   // (narrow non-breaking space)

/*
 * AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │ ₁ │ ₂ │ ₃ │ ₄ │ ₅ │ ₆ │ ₇ │ ₈ │ ₉ │ ₀ │   │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ ^ │ < │ > │ $ │ % │ @ │ & │ * │ ' │ ` │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ { │ ( │ ) │ } │ = │ \ │ + │ - │ / │ " │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │ ~ │ [ │ ] │ _ │ # │ | │ ! │ ; │ : │ ? │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

#define EL_SUB1 RA(EL_1) // ₁
#define EL_SUB2 RA(EL_2) // ₂
#define EL_SUB3 RA(EL_3) // ₃
#define EL_SUB4 RA(EL_4) // ₄
#define EL_SUB5 RA(EL_5) // ₅
#define EL_SUB6 RA(EL_6) // ₆
#define EL_SUB7 RA(EL_7) // ₇
#define EL_SUB8 RA(EL_8) // ₈
#define EL_SUB9 RA(EL_9) // ₉
#define EL_SUB0 RA(EL_0) // ₀

#define EL_LPRN RA(EL_S) // (
#define EL_RPRN RA(EL_E) // )

/*
 * Shift+AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │ ¹ │ ² │ ³ │ ⁴ │ ⁵ │ ⁶ │ ⁷ │ ⁸ │ ⁹ │ ⁰ │   │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ ^ │ ≤ │ ≥ │ ¤ │ ‰ │ ° │   │ × │ ´ │ ` │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ ˇ │   │   │ ˙ │ ≠ │ / │ ± │ ¯ │ ÷ │ ˝ │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │ ~ │ , │ ˛ │   │   │   │ ¬ │ ¸ │   │ ˘ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

#define EL_SUP1 LS(RA(EL_1))    // ¹
#define EL_SUP2 LS(RA(EL_2))    // ²
#define EL_SUP3 LS(RA(EL_3))    // ³
#define EL_SUP4 LS(RA(EL_4))    // ⁴
#define EL_SUP5 LS(RA(EL_5))    // ⁵
#define EL_SUP6 LS(RA(EL_6))    // ⁶
#define EL_SUP7 LS(RA(EL_7))    // ⁷
#define EL_SUP8 LS(RA(EL_8))    // ⁸
#define EL_SUP9 LS(RA(EL_9))    // ⁹
#define EL_SUP0 LS(RA(EL_0))    // ⁰

#define EL_DCIR LS(RA(EL_Q))    // ^ (dead)
#define EL_LEQL LS(RA(EL_C))    // ≤
#define EL_GEQL LS(RA(EL_O))    // ≥
#define EL_CURR LS(RA(EL_P))    // ¤ (dead)
#define EL_PERM LS(RA(EL_W))    // ‰
#define EL_RNGA LS(RA(EL_J))    // ° (dead)
#define EL_MUL  LS(RA(EL_D))    // ×
#define EL_ACUT LS(RA(EL_1DK))  // ´ (dead)
#define EL_DGRV LS(RA(EL_Y))    // ` (dead)

#define EL_CARN LS(RA(EL_A))    // ˇ (dead)
#define EL_DOTA LS(RA(EL_N))    // ˙ (dead)
#define EL_NEQL LS(RA(EL_F))    // ≠
#define EL_DSLS LS(RA(EL_L))    // / (dead)
#define EL_PLMN LS(RA(EL_R))    // ±
#define EL_MACR LS(RA(EL_T))    // ¯ (dead)
#define EL_DIV  LS(RA(EL_I))    // ÷
#define EL_DACU LS(RA(EL_U))    // ” (dead)

#define EL_DTIL LS(RA(EL_Z))    // ~ (dead)
#define EL_DCMM LS(RA(EL_X))    // , (dead)
#define EL_OGON LS(RA(EL_MINS)) // ˛ (dead)
#define EL_NOT  LS(RA(EL_H))    // ¬
#define EL_CEDL LS(RA(EL_G))    // ¸ (dead)
#define EL_BREV LS(RA(EL_K))    // ˘ (dead)

#define EL_NBSP LS(RA(SPACE))   // (non-breaking space)
