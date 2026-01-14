# 🎹 Hackaboard - The Hackaboard Keyboard

Welcome to **Hackaboard**, a beautifully crafted **63% mechanical keyboard** that combines aesthetics, functionality, and a touch of personality. A versatile keyboard designed to elevate your typing experience.

---

## ✨ What is Hackaboard?

Hackaboard is a custom mechanical keyboard featuring a 63% layout with modern conveniences like an **OLED display**, **rotary encoder**, and **full programmability**. Whether you're a developer, writer, designer, or gamer, this keyboard adapts to your workflow with support for multiple keymap configurations.

---

## 📸 Gallery

Take a look at the Hackaboard in all its glory:

![Hackaboard Overview 1](images/Screenshot%202026-01-13%20133701.png)

![Hackaboard Overview 2](images/Screenshot%202026-01-13%20133736.png)

![Hackaboard Overview 3](images/Screenshot%202026-01-13%20133800.png)

![Hackaboard Overview 4](images/Screenshot%202026-01-13%20133943.png)

![Hackaboard Overview 5](images/Screenshot%202026-01-13%20134030.png)

![Hackaboard Overview 6](images/Screenshot%202026-01-13%20142016.png)

![Hackaboard Overview 7](images/Screenshot%202026-01-13%20142027.png)

![Hackaboard Overview 8](images/Screenshot%202026-01-13%20142046.png)

![Hackaboard Overview 9](images/Screenshot%202026-01-13%20142106.png)

---

## 🎯 Key Features

### Hardware Specs
- **Layout:** 63% compact form factor (63 keys)
- **Microcontroller:** Raspberry Pi Pico 2W (RP2350, supports QMK firmware)
- **Matrix:** 5 rows × 15 columns (COL2ROW configuration)
- **Switch Type:** Cherry MX PCB hotswap compatible
- **Display:** SSD1306 0.91" OLED (128x32 pixels)
- **Input:** EC11 Rotary Encoder with knob support
- **Debounce:** 5ms for reliable key registration

### Software Capabilities
- **Firmware:** QMK-compatible with custom configuration
- **Encoder:** Customizable rotary encoder with 4-level resolution
- **MIDI Support:** Full MIDI protocol implementation for music applications
- **Macros:** Built-in email address macro with right shift + 2
- **Keymaps:** Multiple pre-configured layouts (see below)

Please read [the Journal](./hackaboard-journal.md)
---

## ⌨️ Keymap Configurations

Hackaboard comes with **4 pre-built keymaps** to suit different typing styles and use cases:

### 1. **Default Keymap**
The standard ANSI layout – perfect for everyday typing and programming.

### 2. **Photographer Keymap**
Optimized for photo editing workflows with custom shortcuts and macro assignments.

### 3. **Writer Keymap**
Specialized layout for content creators with quick-access keys for common writing functions.

### 4. **VIA-Compatible Keymap**
Full support for the VIA configurator, allowing you to reprogram your keyboard without touching code.

---

# BOM table

Category | Item | Website | Cost (INR) | Cost (USD)
-- | -- | -- | -- | --
MCU | Raspberry Pi Pico 2 | Robu.in | ₹544 | $6
Diodes | 1N4148 SOD-123 (×63) | Robu.in | ₹36 | $0.4
Shipping (MCU + diodes) | — | Robu.in | ₹49 | $0.54
Subtotal (MCU + diodes) |   |   | ₹630 | $7
Conversion fee (3%) |   |   | ₹650 | $7.22
MCU + Diodes Total |   |   | ₹650 | $7.22
PCB | 2-layer PCB (base settings, incl. GST + shipping) | LionCircuits | ₹5,281 | $58.68
Conversion fee (3%) |   |   | ₹159 | $1.77
PCB Total |   |   | ₹5,440 | $60.45
Switches + Stabilizers + Hotswap sockets | (x45 + x10 pack) | StacksKB | ₹3,604 | $40.04
Conversion fee (3%) |   |   | ₹108 | $1.20
Switches Total |   |   | ₹3,712 | $41.24
Keycaps | Full keycap set | CuriosityCaps | ₹1,999 | $22.21
Conversion fee (3%) |   |   | ₹59 | $0.66
Keycaps Total |   |   | ₹2,058 | $22.87
Non-metal Plate | Plate | robu.in | Rs 330 | 3.6 USD
Screws | | onlyscrews.in | Rs 400 | 4.5 USD
0.91" OLED | | I have
Potentiometer | | I have

And i need 3d printing from #printing-legion so that's Rs 820 or **9 USD**.

---

## 🛠️ File Structure

```
Hackaboard-v1/
├── keyboards/hackaboard/         # Main keyboard configuration
│   ├── config.h                  # Hardware configuration
│   ├── info.json                 # Layout and metadata
│   ├── hackaboard.c              # Firmware logic
│   ├── hackaboard.h              # Firmware headers
│   ├── rules.mk                  # Build rules
│   └── keymaps/                  # Keymap definitions
│       ├── default/              # Default layout
│       ├── photographer/         # Photo editing optimized
│       ├── writer/               # Content creation optimized
│       └── via/                  # VIA configurator support
├── PCB/                          # KiCAD PCB design files
│   ├── hackaboard.kicad_sch      # Schematic
│   ├── hackaboard.kicad_pcb      # PCB layout
│   └── production/               # Manufacturing files (BOM, positions)
├── CAD/                          # 3D models and mechanical design
│   ├── case/                     # Keyboard case designs
│   └── plate/                    # Stabilizer plate designs
└── images/                       # Product photography
```

---

## 🚀 Getting Started

### Prerequisites
- QMK Firmware environment set up ([QMK Docs](https://docs.qmk.fm/))
- Python 3.6+ and pip
- ARM GCC toolchain (for RP2350)

### Building the Firmware

1. **Clone the QMK repository** and copy the Hackaboard firmware:
   ```bash
   git clone https://github.com/qmk/qmk_firmware.git
   cp -r keyboards/hackaboard/ qmk_firmware/keyboards/
   ```

2. **Build your preferred keymap:**
   ```bash
   qmk compile -kb hackaboard -km default
   ```

3. **Flash to your keyboard:**
   ```bash
   qmk flash -kb hackaboard -km default
   ```

### VIA Support
If you prefer a graphical interface, use the **VIA configurator**:
1. Download [VIA](https://www.caniusevia.com/)
2. Load the VIA keymap onto your Hackaboard
3. Customize in real-time without reflashing

---

## 🎨 Customization

### Rotary Encoder
The EC11 encoder on Hackaboard can be customized for:
- Volume control
- Scroll wheel simulation
- Layer switching
- Application shortcuts

### OLED Display
The tiny 0.91" OLED shows:
- Current layer information
- Keyboard status
- Custom animations
- Typing statistics

### Email Macro
Quickly insert your email address:
- **Key Combo:** Right Shift + 2
- **Default:** `shlokvaidya.in@gmail.com.com` (customize in `config.h`)

---

## 🔧 Advanced Features

### MIDI Mode
Hackaboard supports MIDI communication for:
- Virtual instrument control
- DAW integration
- Music production workflows

### Debounce Tuning
Adjust key sensitivity without reflashing:
- Current debounce: 5ms
- Modify `DEBOUNCE` in `config.h` if needed

### Custom Firmware Logic
Edit `hackaboard.c` and `hackaboard.h` to add:
- Complex macros
- Display animations
- Sensor integrations
- Hardware customizations

