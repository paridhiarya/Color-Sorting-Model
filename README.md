# Color and Weight Sensing Object Sorting Model

The Color and Weight Sensing Object Sorting Model is a hardware and software system designed to sort objects into four bins based on their color and weight. This project integrates various components, including Arduino Uno, Node-MCU, HX711 Load Cell, and others, to create an efficient sorting system. Additionally, it features an Android-based interface for recording and displaying object descriptions and counts.

## Abstract

‘Colour sorting machines’ or ‘color sorters’ are machines that detect the colors
of objects before them, distinguish items by color, and use mechanical or pneumatic ejection devices to transfer items whose colors are not within the acceptable range. The added weight detection feature provides additional information about objects and ensures weight limits aren’t exceeded, wherever applicable. Such machines may potentially be used in production lines in bulk food processing and other industries.

## Justification

This machine may find an application in the agricultural industry in classifying grains. The rice sorting industry is the first big market. It can be used to separate different stones, black rice, etc. according to the color difference of the rice (hulled rice) material. Similarly, it can also be used to sort other coarse grains, such as wheat, corn, peanuts, various beans, sesame, etc. 
Furthermore, color sorters may be used in the food processing industry, working with items such as coffee, nuts, oil crops, etc. The goal will be to separate discolored, toxic (such as ergot), unripe substances or husks that still have skins such as sunflower seeds. Compared with manual sorting, the machine will save labor and time, as it has high efficiency and low processing cost. 

This prototype is highly scalable. Colour sorter integrated with a weight detection system can not only solve the needs of suppliers in the food industry and agricultural product processing industries, but also meet the needs of suppliers in several industrial fields, such as for recycling. Furthermore, an additional feature enabling the maintenance of objects sorted thus far via a Bluetooth module increases the usability of the sorter.


## Hardware Components Required:

   - Arduino uno
   - NodeMCU
   - TCS3200 Colour Sensor
   - Servo Motors (2)
   - Weight Sensor (HX711 Load Cell)
   - Battery
   - Sun board Sheets for Model
   - Jumper wires

## Technologies Used

The project incorporates the following technologies:

- **Embedded C**: Used for programming the microcontrollers and sensors to control the hardware components.

- **Java (Android)**: The Android-based interface is developed in Java, providing a user-friendly way to interact with the system.

- **Firebase**: Firebase is used for real-time data storage and synchronization, making it easier to manage and access data from the Android interface.
  
- **Arduino Uno IDE**: Used for writing the embedded C code to burn onto the Arduino Uno and Node MCU

## Getting Started

To get started with the Color and Weight Sensing Object Sorting Model, follow these steps:

1. Clone the repository to your local machine:

   ```bash
   git clone https://github.com/yourusername/color-weight-sensing-sorting-model.git

2. Set up the necessary hardware components, including Arduino Uno, Node-MCU, and HX711 Load Cell, and ensure they are properly connected.

3. Install the Android application on your mobile device and connect it to the system.

4. Start using the system to sort objects based on their color and weight.

## Usage
1. Launch the Android application and connect it to the hardware system.

2. Place objects on the sensing platform and initiate the sorting process using the Android interface.

3. The system will sort objects into four bins, and the Android interface will display object descriptions and counts in real time.

4. Customize and configure the system to meet your specific sorting requirements and object categories.

## Contributing
1. If you wish to contribute to this project, please follow these steps:

2. Fork the repository to your GitHub account.

3. Create a new branch for your feature or bug fix:

   ```bash
   git checkout -b feature/your-feature

4. Make your changes and commit them with meaningful messages.

5. Push your changes to your forked repository:

   ```bash
   git push origin feature/your-feature

6. Create a pull request from your forked repository to the original repository.

## License
This project is licensed under the MIT License. Please feel free to use, modify, and distribute it according to the terms of the license.

## Contact
For any questions or inquiries about this project, please contact:


- Name: Paridhi 
- Mail: paridhiarya22@gmail.com, paridhi.a21@iiits.in
- Socials: Linked in Github profile

I appreciate your interest and contributions to the Color and Weight Sensing Object Sorting Model. Thank you!
