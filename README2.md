<h1 align="center"> :chart_with_downwards_trend: Real Time Stock Prices :chart_with_upwards_trend: </h1>

![GitHub repo file count](https://img.shields.io/github/directory-file-count/Jesulayomy/calculator?style=for-the-badge) ![GitHub repo size](https://img.shields.io/github/repo-size/Jesulayomy/calculator?style=for-the-badge)

<h2>Instructions</h2>
    <p>
    Using React or Vue.js, create a responsive dashboard that displays real-time stock prices from a 
    public api such as <a href="https://iexcloud.io/" alt="iexcloud.io">IEX Cloud</a>
    </p>
    <p>
    The dashboard should include a search bar that allows users to search for stock symbols, and the
    dashboard should display the current price, change in price, and percentage change for each stock.
    </p>
<ul style="list-style-type: none; padding: 0px">
    <h3>Using:</h3>
    <li>Library: React Js</li>
    <li>Api: <a href="https://iexcloud.io/" alt="iexcloud.io">IEX Cloud</a>
</ul>

### Installation:
The dashboard can be installed by cloning this repository to your terminal
With Git:

```commandline
$ git clone https://github.com/micoliser/REPONAME.git
```

Or using wget and unzip:
```commandline
$ wget https://github.com/micoliser/REPONAME/archive/refs/heads/master.zip
```

Then unzip the downloaded file
```commandline
$ unzip master.zip
```

---

### Usage:
To use the dashboard, run the command; (Dashboard will be opened Default Browser)
```commandline
$ cd REPONAME
$
$ npm start
$
```

---

## The Dashboard
![New Opened Dashboard in broswer window showing searchbar](images/default_dash.png)
The dashboard is opened after running ```npm start``` from the terminal and
 displays the first 100 stocks by default.
 
#### The Dashboard search bar features

The dashboard search bar can be used to find a single stock,<br>
![Search image for single stock](images/single_search.png)

or multiple stocks seprated by commas (no spaces).<br>
![Search image for multiple stocks](images/multi_search.png)

It supports typing suggestions based on user input (first 50 stocks, completes text on click).<br>
![Search image showing suggestions](images/suggest_search.png)


#### Dashboard Results
Dashboard results show the current price, change in price, and percentage change for each stock.
![Search image showing result parameters](images/default_dash.png)


Displays the first three results of the search.
![Search image showing multiple results of stock search](images/default_dash.png)

---

#### Bugs

Cockroaches, termites and houseflies<br>
Data takes approximately ten seconds to load. Chack your internet connection if loading persists.

---
