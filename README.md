# Electrical-Onboarding
New members will learn to push their code from the "Controlling Your Own Motor" onboarding assignment into their own branch

All code you will write for prosthetics will be saved and documented in our GitHub. This repository is for training purposes only- you will be given access to project-specific repositories once you've completed the entire onboarding process.

Basic GitHub terminology:
  Repository (repo) -  Your project folder. It contains all project files, documentation, and the revision history of every single file.
  Local - The copy of the project sitting offline on your personal computer.
  Remote - The copy of the project hosted online on platforms like GitHub
  Staging Area (Index): The area where you "add" files to tell Git which changes you want to include in your next commit.
  Commit - A "save point" or snapshot of your files at a specific moment. Every commit is assigned a unique ID (a hash) so you can track who changed what and when.
  Push - Sending your committed local changes up to the remote repository on GitHub.
  Pull - Fetching changes from the remote repository and immediately merging them into your local files to keep them updated.
  Fetch - Downloading new data from the remote repository without merging it into your working files. This lets you see what others have done before adapting it.

3D-Printed Prosthetics Electrical Team uses two different editors during development: Arduino IDE and VSCode/PlatformIO. Arduino IDE is a user-friendly software primarily used for microcontrollers. Its alternative is VSCode (largely popular code editing software) paired with the PlatformIO IDE (extension that allows embedded system design in VSCode). Either choice is fine so long as you are comfortable with the UI and can push code to the GitHub.

Setting up Arduino IDE:
  1) Navigate to download site (https://www.arduino.cc/en/software/)
  2) Choose your operating system (Win 10 or newer, macOS, Linux, etc) and press download
  3) Wait for download then complete installation steps

Setting up VSCode/PlatformIO:
  1) Navigate to VSCode download site (https://code.visualstudio.com/download?_exp_download=d53503e735)
  2) Choose your operating system (Windows, macOS, Linux)
  3) Wait for download then complete installation steps
  4) Open VSCode. Click on "Extensions" on the left of the UI, and search for "PlatformIO IDE"
  5) Install and enable PlatformIO extension. 

Preparing Environment in Arduino IDE:
  1) Connect the microcontroller to your computer with a USB cable (provided)
  2) In the Arduino IDE, go to Tools > Board and select the specific microcontroller model (ie ESP32 Dev Model)
  3) Go to Tools > Port and select the correct COM port for your connected port (if not intuitive, correct port can be found in device manager on your machine)
  4) Upload your code once ready to compile and flash code to your microcontroller
     *Flashing means uploading a program to be stored in the memory of a device even when untethered from the device that uploaded it

Preparing Environment in VSCode + PlatformIO
  1) Select PlatformIO (ant icon) on your sidebar in VSCode
  2) Click "New Project"
  3) Name the project appropriately, select your specific microcontroller under "board," then choose a framework (Arduino or ESP-IDF default)
  4) Finish and wait for PlatformIO to generate your project
  5) Open the file explorer on the left then navigate to the src/ folder and open main.cpp
  6) Build and upload code using the dropdown in the top right or the quick access buttons on the bottom of the screen when you are ready to flash your code.

Make sure to download git on your machine before proceeding with any of the following steps (just search git on your browser and download the latest version).

Pushing code if you're using Arduino IDE:
  *Arduino doesn't natively integrate GitHub into it's editor, so we need to use external tools to track sketch folders and push to GitHub
  Option 1 (Command Line):
    1) Open terminal in Arduino or command prompt
    2) Navigate to your Arduino project folder
          cd Documents/Arduino/YourProjectName
    3) Initialize Git in this directory
          git init
    4) Link your local folder to your remote GitHub repository
          git remote add origin copied-repository-URL
    5) Add all your Arduino files (.ino) to staging
          git add .
    6) Create and switch to new branch
          git checkout -b your-branch-name
    7) Commit your files locally
          git commit -m "Your commit message"
    8) Push your code to GitHub
          git push -u origin your-branch-name

  Option 2 (GitHub Desktop):
    *Steps for using GitHub Desktop to push code from Arduino IDE can be found online
    
  Pushing code if you're using VSCode/PlatformIO:
  Option 1 (VSCode GUI):
    1) Open the Source Control Panel: Click the Source Control icon on the left sidebar (the network graph icon) or press Ctrl + Shift + G.
    2) Create/Switch to Your Branch: Click on the branch name shown in the bottom-left corner of the VS Code status bar (it usually says main or master). Select Create new branch... from the dropdown menu at the top, type your new branch name, and press Enter.
    3) Stage Changes: Click the + icon next to the files you want to track, or next to Changes to stage everything.
    4) Commit: Type your commit message in the text box at the top of the panel and click Commit (or press Ctrl + Enter)
    5) Publish/Push: If this is a brand-new branch that doesn't exist on GitHub yet, click the Publish Branch button that appears. If the branch already exists on GitHub, click the ... (three dots) at the top of the Source Control menu and select Push.

  Option 2 (Command Line):
    1) Open the integrated terminal in VS Code (Ctrl + ~)
    2) Create and switch to your branch:
          bashgit checkout -b your-branch-name
    3) Stage your PlatformIO files:
          bashgit add .
    4) Commit your changes:
          bashgit commit -m "Your commit message"
    5) Push to GitHub:
          bashgit push -u origin your-branch-name
    
  Option 3 (GitHub Desktop):
    *Steps for using GitHub Desktop to push code from Arduino IDE can be found online
