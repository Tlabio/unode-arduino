/*******************************************************************************
 * Copyright (c) 2018 Ioannis Charalampidis
 *
 * This is a private, preview release of the uNode hardware abstraction library.
 * The holder of a copy of this software and associated documentation files
 * (the "Software") is allowed to use the Software without any obligation to
 * create private and/or commercial projects. The Software can be obtained
 * through the official channels of the author, including but not limited to
 * Github and the official TLab.gr website. It is FORBIDDEN however to modify,
 * reverse-engineer, publish, distribute, sublicense, and/or sell copies of the
 * Software itself.
 *
 * The license for this file might change in a future release. The author is not
 * obliged to announce this change through any channel but it should be included
 * in the release notes.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 *******************************************************************************/
#ifndef PINOUT_H
#define PINOUT_H

/**
 * Defines aliases for the pins on the uNode board
 *
 * The user has the ability to change the pins by defining them before including
 * the `uNode.hpp` header file.
 */

#ifndef UPIN_SCK
#define UPIN_SCK        14
#endif

#ifndef UPIN_MISO
#define UPIN_MISO       12
#endif

#ifndef UPIN_MOSI
#define UPIN_MOSI       13
#endif

#ifndef UPIN_RFM_DIO1
#define UPIN_RFM_DIO1   4
#endif

#ifndef UPIN_RFM_DIO0
#define UPIN_RFM_DIO0   5
#endif

#ifndef UPIN_RFM_EN
#define UPIN_RFM_EN     0
#endif

#ifndef UPIN_GPIO
#define UPIN_GPIO       2
#endif

#ifndef UPIN_VBUS_EN
#define UPIN_VBUS_EN    15
#endif

#ifndef UPIN_CS_RF
#define UPIN_CS_RF      0
#endif

/**
 * Pin IDs when using the board schematic
 */
#define D0              UPIN_GPIO   // Physical pins
#define D1              UPIN_CS_RF
#define D2              100         // Expansion pins
#define D3              101
#define D4              102
#define D5              103
#define D6              104
#define D7              105
#define D8              106
#define D9              107

#endif