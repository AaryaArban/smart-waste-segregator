# **Automated Waste Segregation Model**

![Smart Waste Segregation System](https://drive.google.com/uc?export=view&id=1FbFkHamfmmm9l8lyEi584hEMDRWFY2VD)

## **📌 Overview**

This project presents the design and implementation of an **Automated Waste Segregation Model** that efficiently classifies waste into three categories: **dry, wet, and metallic**. By integrating **moisture sensors, proximity sensors, and infrared (IR) sensors**, the system automates waste sorting. A **microcontroller (Arduino)** processes sensor data and controls **servo motors** to direct waste into designated bins. The model also incorporates **real-time feedback** through **Serial Bluetooth Terminal** and **IoT connectivity** for remote monitoring.

## **🔧 Features**

✅ **Automated Waste Sorting:** Uses sensor technology to identify and classify waste.

✅ **Microcontroller-Based System:** Powered by an **Arduino** to process data and control motors.

✅ **Sensor Integration:** Moisture sensors detect wet waste, proximity sensors identify metals, and IR sensors distinguish dry waste.

✅ **Servo Motor Mechanism:** Automatically directs waste into the correct bins.

✅ **IoT & Bluetooth Connectivity:** Enables real-time monitoring via a **Serial Bluetooth Terminal** and IoT platforms.

✅ **High Accuracy:** Achieves over **90% classification accuracy** based on experimental results.

✅ **Sustainability Focus:** Reduces manual sorting efforts and promotes efficient recycling.

## **🛠️ Tech Stack & Components**

### **🔹 Hardware:**

* **Microcontroller:** Arduino Uno R3
  
* **Raindrop Moisture Sensor:** To detect wet waste
  
* **Proximity Sensor:** To identify metallic waste
  
* **Infrared (IR) Sensor:** To classify dry waste
  
* **Servo Motors:** For waste bin segregation
  
* **Bluetooth Module (HC-05):** For wireless monitoring

### **🔹 Software:**

* **Arduino IDE** (for programming the microcontroller)

* **C/C++ (Arduino Sketches)**
  
* **Serial Bluetooth Terminal App** (for real-time feedback)

## **🚀 Installation & Setup**

### **1️⃣ Prerequisites:**

Ensure you have the following installed:

* **Arduino IDE**

* **Serial Bluetooth Terminal App** (for Android)

### **2️⃣ Clone This Repository:**

```bash

git clone https://github.com/AaryaArban/smart-waste-segregator.git
cd smart-waste-segregator

```

### **3️⃣ Upload Code to Arduino:**

* Open `waste_segregation.ino` in Arduino IDE.
  
* Select the correct **Board** (`Arduino Uno`) and **Port**.
  
* Upload the code to the microcontroller.

### **4️⃣ Connect Hardware Components:**

* Connect **sensors, servo motors, and Bluetooth module** as per the wiring diagram.
  
* Power the system using a **5V power supply or USB connection**.

### **5️⃣ Test the System:**

* Place different waste materials near the sensors and observe the classification.
  
* Check real-time feedback in the **Serial Monitor or Bluetooth Terminal App**.
  
* If IoT is enabled, monitor waste segregation remotely.

## **📊 System Workflow**

1. Waste is placed in the detection area.
   
2. **Sensors analyze** the waste properties (moisture, metallic presence, reflectivity).
   
3. The **Arduino microcontroller processes** sensor data and determines the waste type.
   
4. Corresponding **servo motors activate**, guiding the waste into the correct bin.
  
5. Classification results are displayed via **Bluetooth and IoT dashboard**.

## **📷 Circuit Diagram & Hardware Setup**

*(Add a wiring diagram or circuit schematic here.)*

## **🔬 Experimental Results & Accuracy**

* Achieved over **90% accuracy** in classifying waste into wet, dry, and metallic categories.
  
* Improved waste disposal efficiency by reducing manual sorting errors.
  
* Demonstrated real-time classification with minimal processing delay.

## **💡 Applications**

🔹 **Smart Cities:** Automated waste collection systems for urban areas.

🔹 **Households:** Efficient waste segregation at homes for better recycling.

🔹 **Industrial Waste Management:** Reducing manual labor and increasing efficiency.

🔹 **Public Waste Bins:** Smart bins for parks, offices, and public spaces.
