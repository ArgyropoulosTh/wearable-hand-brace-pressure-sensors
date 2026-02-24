# Personalized 3D-Printed Hand Brace with Pressure Sensors

Patient-specific wearable orthosis integrating embedded pressure sensing for continuous biomechanical monitoring and improved comfort.

**Status:** Completed (MSc Thesis)
**Institution:** Delft University of Technology
**Role:** Lead Design & Development
**Domain:** Medical Device • Wearable Biomechanics • Additive Manufacturing

---

# Abstract / Overview

This project presents the design and evaluation of a personalized 3D-printed hand brace integrating pressure sensors for continuous monitoring of the hand–orthosis interface. The work combines biomechanical design, additive manufacturing, embedded sensing, and regulatory-oriented risk analysis to improve patient comfort and enable quantitative clinical feedback.

The proposed system aims to bridge the gap between conventional passive orthoses and data-driven wearable medical devices.

---

# Problem Statement

Conventional hand orthoses often suffer from:

* Poor anatomical fit
* Lack of quantitative feedback
* Localized pressure discomfort
* Limited capability for continuous monitoring

These limitations reduce patient compliance and restrict clinicians’ ability to objectively evaluate orthotic performance.

---

# Project Objectives

The main objectives were:

* Develop a **patient-specific hand orthosis**
* Integrate **embedded pressure sensing**
* Ensure **biocompatible and comfortable design**
* Validate structural integrity via FEA
* Demonstrate manufacturability via 3D printing

---

# Methodology & Design Process

## 1️⃣ Patient-Specific Design

The orthosis geometry was customized to match patient anatomy using CAD modeling and iterative refinement.

**Key design considerations:**

* ergonomic contouring
* ventilation and weight reduction
* strap positioning
* sensor placement zones

![CAD model](assets/images/Front_view_Hand_Brace_arduino.png)

---

## 2️⃣ Finite Element Analysis (FEA)

FEA was conducted to:

* evaluate stress distribution
* identify pressure concentration zones
* verify structural safety
* support design optimization


![FEA results](assets/images/Abaqus-Straps.png)

---

![Brace FEA_demo](assets/gifs/Abaqus-Ext.gif)


---

![FEA results](assets/images/Abaqus-FEA-I.png)
![FEA results](assets/images/Abaqus-FEA-II.png)



---

## 3️⃣ Embedded Pressure Sensing

The brace integrates pressure sensors enabling continuous interface monitoring.

**System capabilities:**

* localized pressure measurement
* real-time feedback
* support for clinical evaluation


![Sensors](assets/images/Sensors.png)
![Sensors](assets/images/Dashboard.png)

---

## 4️⃣ Prototyping & Manufacturing

**Manufacturing method:** Additive Manufacturing (3D Printing)

Technologies evaluated:

* FDM
* SLA

**Key manufacturing considerations:**

* print orientation
* material selection
* surface finish for skin contact
* dimensional accuracy
* repeatability


![Prototype](assets/images/Hand-Brace-Prototype.jpeg)

---

# 📊 Validation & Results

The developed orthosis demonstrated:

* successful patient-specific fit
* reliable pressure sensing capability
* improved comfort compared to rigid orthoses
* structural integrity confirmed via FEA
* benefits for both patients and clinicians through the interactive platform
---

# Key Insights

* Personalization significantly improves wearability
* Additive manufacturing enables rapid customization
* Embedded sensing adds valuable clinical feedback
* Early risk analysis supports MDR readiness

---

# Impact

This work contributes toward next-generation **smart wearable orthoses** that combine mechanical support with quantitative monitoring, supporting the transition toward data-driven rehabilitation devices.

---
## Code & Data Processing

The project includes embedded sensing and data processing components used to acquire and analyze interface pressure measurements.

## Key Capabilities

* Pressure sensor data acquisition
* Signal filtering and preprocessing
* Data visualization and analysis
* Support for experimental validation workflows

## Technologies Used

* Arduino IDE
* Embedded pressure sensors
* WiFi communication 

---

*Note:* The repository contains representative code for demonstration purposes. Hardware-specific configurations may be simplified for portability.

## Embedded Firmware (Arduino)

The wearable brace integrates pressure sensors connected to a microcontroller for real-time data acquisition.

**Key features:**

* Multi-sensor pressure acquisition
* Configurable sampling rate
* Lightweight embedded implementation

**Firmware location:**

```text
arduino/MULTIPLE_FSR_CODE.ino
```

# Media

## Demo Video

![Brace demo](assets/gifs/Hand-Brace-Short.gif)

---

# Documentation

* MSc Thesis (link: https://resolver.tudelft.nl/uuid:38cd6cb1-9a50-4695-b6f1-0d593d78411b)

---

# Confidentiality Note

This repository contains selected technical material for portfolio purposes. Sensitive or proprietary details have been intentionally omitted.
